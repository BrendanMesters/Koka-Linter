import scope
import language-constructs
import error-warning-handler


/*

                -⋄=  HELPERS  =⋄-

    Here we'll house the helper functions used by the
    different code analysis tools/interpreters.

*/



/*
Substitute the current scope in the input expression (`inp`),
omitting any elements with a name present in `shadow`
*/

fun test_substitute(inp: expression, shadow: list<string> = Nil): <div, exn, errors-and-warnings, polymorphic_scope<expression>, console> expression
    match inp
        Num -> inp
        EFalse -> inp
        ETrue -> inp
        Variable(name) ->
            if shadow.any(fn (v) v == name)
            then
                Variable(name)
            else
                match pget(name)
                    Direct_value(v) -> v
                    Actual_closure(e, clos) ->
                        // Save the old scope
                        val old_scope = pget_state()

                        // Apply the closure scope
                        val new_scope = [clos, old_scope].concat
                        pset_state(new_scope)

                        // interpret the statement with the closed scope
                        val retval = e.test_substitute()

                        // Restore the old scope 
                        pset_state(old_scope)
                        retval
        Lambda (arg, arg_type, body) ->
            val nbody = test_substitute(body, [arg.patterns_to_string, shadow].concat)
            Lambda(arg, arg_type, nbody)
        If (cond, thus, otherwise) -> If(cond.test_substitute(shadow), thus.test_substitute(shadow), otherwise.test_substitute(shadow))
        MLpair(e1, e2) -> MLpair(e1.test_substitute(shadow), e2.test_substitute(shadow))
        Apply(func, inp_vals) -> Apply(func.test_substitute(shadow), inp_vals.test_substitute(shadow))
        Let (arg, arg_vals, body) ->
            val n_arg_vals = arg_vals.test_substitute(shadow)
            val n_body = body.test_substitute([arg.patterns_to_string, shadow].concat)
            Let(arg, n_arg_vals, n_body)
        Letrec (arg, arg_type, arg_vals, body) ->
            val n_arg_vals = arg_vals.test_substitute([arg.patterns_to_string, shadow].concat)
            val n_body = body.test_substitute([arg.patterns_to_string, shadow].concat)
            Letrec(arg, arg_type, n_arg_vals, n_body)
        Equals(e1, e2) -> Equals(e1.test_substitute(shadow), e2.test_substitute(shadow))
        EMult(e1, e2) -> EMult(e1.test_substitute(shadow), e2.test_substitute(shadow))
        EAdd(e1, e2) -> EAdd(e1.test_substitute(shadow), e2.test_substitute(shadow))
        ESub(e1, e2) -> ESub(e1.test_substitute(shadow), e2.test_substitute(shadow))
        Null -> inp
        _ -> Null
 

/*
Function takes a set of arguments and values to bind
to those arguments and adds them to a scope.

The arguments are assumed to be of type pattern
and the string values of the variable-value pairs
will be extracted from them.

The values should be of type expression.

This code is supposed to work with a polymorphic scope
however, thus a function that can take an element from
the `expression` type to the polymorphic type of the
scope should also be provided in the form of the
`converter` function.
*/
fun args_and_vals(pat: patern, vals: expression, converter: (expression) -> <console,polymorphic_scope<a>|e> a, use_closure: bool = False) : <console,polymorphic_scope<a>|e> ()
    match (pat, vals)
        (Ident(name), _) -> 
            if use_closure
            then
                val scp = pget_state()
                padd_with_closure(name, vals, scp)
            else
                padd(name, vals.converter)
        (NullPat, _) -> ()
        (Patpair(p1, p2), MLpair(e1, e2)) -> 
            args_and_vals(p1, e1, converter)
            args_and_vals(p2, e2, converter)
        _  -> ()

fun args_and_types(pat: patern, typs: expression_type) : <polymorphic_scope<expression_type>, console|e> ()
    match (pat, typs)
        (Ident(name), _) -> padd(name, typs)
        (NullPat, _) -> ()
        (Patpair(p1, p2), EPair(t1, t2)) ->
            args_and_types(p1, t1)
            args_and_types(p2, t2)
        _ -> ()


/*

                -⋄=  Actual Code =⋄-
    
    Here we'll house the actual code of the different
    code analysers as well as the interpreter.

*/
fun type_checker(inp: expression) : <div, exn, errors-and-warnings, polymorphic_scope<expression_type>, console>  expression_type
    match inp
        Num -> ENumber
        EFalse -> EBoolean
        ETrue -> EBoolean
        Variable(name) -> 
            if !pscope_contains(name) 
            then 
                add_error("Typechecker: Variable '" ++ name ++ "' was not in scope")
                ENull
            else
                match pget(name)
                    Direct_value(v) -> v
                    Actual_closure(e, clos) ->
                        // Save the old scope
                        val old_scope = pget_state()
                        // Apply the closure scope
                        pset_state(clos)

                        // interpret the statement with the closed scope
                        // println("e = " ++ e.show)
                        val retval = e.type_checker()

                        // Restore the old scope 
                        pset_state(old_scope)
                        //retval
                        retval

        Lambda(arg, arg_type, body) -> 
            args_and_types(arg, arg_type)
            val btype = body.type_checker
            EFunc(arg_type, btype)
        If (cond, thus, otherwise) ->
            if cond.type_checker != EBoolean then add_error("Typechecker: Conditional in if statement is not of type boolean")
            val thus_type = thus.type_checker
            val otherwise_type = otherwise.type_checker
            if thus_type != otherwise_type then add_error("Typechecker: Then and Else branch of if statement do not have the same type")
            thus_type
        MLpair(e1, e2) -> EPair(e1.type_checker, e2.type_checker)
        Apply(func, arg_vals) ->
            match func
                Lambda(arg, arg_type, body) ->
                    val old_scope = pget_state()
                    args_and_vals(arg, arg_vals, type_checker, True)
                    val retval = body.type_checker
                    pset_state(old_scope)
                    retval
                Variable(name) ->
                    match func.type_checker
                        EFunc(from, to) ->
                            val av_type = arg_vals.type_checker
                            if av_type != from
                            then 
                                add_error("Typechecker: function input of wrong type, expected [" ++ from.show ++ "] but got [" ++ av_type.show ++ "]")
                                return ENull
                            return to
                        el -> 
                            add_error("Typechecker: variable in apply did not evaluate to function instead" ++ el.show)
                            ENull
                el -> 
                    add_error("Typechecker: variable in apply did not evaluate to function instead" ++ el.show)
                    ENull
        Let (arg, arg_val, body) ->
            val old_scope = pget_state()
            args_and_vals(arg, arg_val, type_checker)
            val retval = body.type_checker
            pset_state(old_scope)
            retval
            

        Letrec (arg, arg_type, arg_val, body) ->
            val old_scope = pget_state()
            args_and_types(arg, arg_type)
            if arg_val.type_checker != arg_type
            then
                add_error("Typechecker: letrec had wrong type anotation")
                return ENull
            val retval = body.type_checker
            pset_state(old_scope)
            retval

        Equals (e1, e2) ->
            if e1.type_checker == e2.type_checker
            then
                EBoolean
            else
                add_error("Typechecker: Equals was encountered with values of differing types")
                ENull
        EMult (e1, e2) ->
            match (e1.type_checker, e2.type_checker)
                (ENumber, ENumber) -> ENumber
                (a, b) -> 
                    add_error("Typechecker: EMult found with incorrect types, namely {" ++ a.show ++"} and {" ++ b.show ++"}")
                    ENull
        EAdd (e1, e2) ->
            match (e1.type_checker, e2.type_checker)
                (ENumber, ENumber) -> ENumber
                (a, b) -> 
                    add_error("Typechecker: EAdd found with incorrect types, namely {" ++ a.show ++"} and {" ++ b.show ++"}")
                    ENull
        ESub (e1, e2) ->
            match (e1.type_checker, e2.type_checker)
                (ENumber, ENumber) -> ENumber
                (a, b) -> 
                    add_error("Typechecker: ESub found with incorrect types, namely {" ++ a.show ++"} and {" ++ b.show ++"}")
                    ENull
        Null -> ENull
        _ -> ENull



fun test_interpreter (inp: expression) : <div, exn, errors-and-warnings, polymorphic_scope<expression>, console> expression
    match inp
        Num (n: int) -> Num(n)
        EFalse -> EFalse
        ETrue -> ETrue
        Variable    (name: string) -> 
            if !pscope_contains(name) 
            then 
                add_error("Variable '" ++ name ++ "' was not in scope")
                Null
            else
                match pget(name)
                    Direct_value(v) -> 
                        v
                    Actual_closure(e, clos) ->
                        // Save the old scope
                        val old_scope = pget_state()

                        // Apply the closure scope
                        pset_state(clos)

                        // interpret the statement with the closed scope
                        val retval = e.test_substitute([name])
                        
                        // Restore the old scope 
                        pset_state(old_scope)
                        retval
        Lambda      (arg: patern, arg_type: expression_type, body: expression) -> 
            inp
        If          (cond: expression, thus: expression, otherwise: expression) -> 
            var condition := False
            match test_interpreter(cond)
                EFalse -> condition := False
                ETrue -> condition := True
            if condition then thus.test_interpreter else otherwise.test_interpreter
        MLpair      (e1: expression, e2: expression) -> 
            MLpair(test_interpreter(e1), test_interpreter(e2))
        Apply       (func: expression, inp_vals: expression) ->
            match func.test_interpreter
                Lambda (args, arg_type, body) ->
                    val old_scope = pget_state()

                    args_and_vals(args, inp_vals, test_interpreter)
                    val retval = body.test_interpreter

                    pset_state(old_scope)
                    
                    retval
                other -> 
                    add_error("The first argument of function application was not a function but was {" ++ other.show ++ "}")
                    Null
        Let         (arg: patern, arg_val: expression, body: expression) ->
            val old_scope = pget_state()
            args_and_vals(arg, arg_val, test_interpreter)
            val retval = body.test_interpreter
            pset_state(old_scope)
            retval
        Letrec      (arg: patern, arg_type: expression_type, arg_val: expression, body: expression) ->
            val old_scope = pget_state()
            args_and_vals(arg, arg_val, test_interpreter, True)
            val retval = body.test_interpreter
            pset_state(old_scope)
            retval
        Equals      (e1: expression, e2: expression) ->
            match (e1.test_interpreter, e2.test_interpreter)
                (Num(n1), Num(n2)) -> if n1 == n2 then ETrue else EFalse
                (EFalse, EFalse) -> ETrue
                (ETrue, ETrue) -> ETrue
                (MLpair(a1, a2), MLpair(b1, b2)) -> 
                    match (Equals(a1, b1).test_interpreter, Equals(a2, b2).test_interpreter)
                        (ETrue, ETrue) -> ETrue
                        _ -> EFalse
                (Null, _) -> Null
                (_, Null) -> Null
                _ -> EFalse
        EMult        (e1: expression, e2: expression) ->
            match (e1.test_interpreter, e2.test_interpreter)
                (Num(n1), Num(n2)) -> Num(n1 * n2)
                (val1, val2) -> 
                    add_error("Arithmatic operation mult didn't have two numbers as input, instead it found {" ++ val1.show ++ "} and {" ++ val2.show ++ "}")
                    Null
        EAdd         (e1: expression, e2: expression) ->
            match (e1.test_interpreter, e2.test_interpreter)
                (Num(n1), Num(n2)) -> Num(n1 + n2)
                (val1, val2) -> 
                    add_error("Arithmatic operation add didn't have two numbers as input, instead it found {" ++ val1.show ++ "} and {" ++ val2.show ++ "}")
                    Null
        ESub         (e1: expression, e2: expression) ->
            match (e1.test_interpreter, e2.test_interpreter)
                (Num(n1), Num(n2)) -> Num(n1 - n2)
                (val1, val2) -> 
                    add_error("Arithmatic operation sub didn't have two numbers as input, instead it found {" ++ val1.show ++ "} and {" ++ val2.show ++ "}")
                    Null
        Null -> 
            add_error("Null value found, this is an error value")
            Null
            
        _ -> 
            add_error("Input {" ++ inp.show ++ "} was not processed in `test_interpreter`")
            Null

