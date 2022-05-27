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
    //println("    test_substitute: {" ++ inp.show ++ "} \n shadow: {" ++ shadow.show ++ "}")
    match inp
        Num -> inp
        EFalse -> inp
        ETrue -> inp
        Variable(name) ->
            if shadow.any(fn (v) v == name)
            then
                Variable(name)
            else
                pget(name) 
        Lambda (arg, body) ->
            val nbody = test_substitute(body, [arg.patterns_to_string, shadow].concat)
            Lambda(arg, nbody)
        If (cond, thus, otherwise) -> If(cond.test_substitute(shadow), thus.test_substitute(shadow), otherwise.test_substitute(shadow))
        MLpair(e1, e2) -> MLpair(e1.test_substitute(shadow), e2.test_substitute(shadow))
        Apply(func, inp_vals) -> Apply(func.test_substitute(shadow), inp_vals.test_substitute(shadow))
        Let (arg, arg_vals, body) ->
            val n_arg_vals = arg_vals.test_substitute(shadow)
            val n_body = body.test_substitute([arg.patterns_to_string, shadow].concat)
            Let(arg, n_arg_vals, n_body)
        Letrec (arg, arg_vals, body) ->
            val n_arg_vals = arg_vals.test_substitute([arg.patterns_to_string, shadow].concat)
            val n_body = body.test_substitute([arg.patterns_to_string, shadow].concat)
            Letrec(arg, n_arg_vals, n_body)
        Equals(e1, e2) -> Equals(e1.test_substitute(shadow), e2.test_substitute(shadow))
        EMult(e1, e2) -> EMult(e1.test_substitute(shadow), e2.test_substitute(shadow))
        EAdd(e1, e2) -> EAdd(e1.test_substitute(shadow), e2.test_substitute(shadow))
        ESub(e1, e2) -> ESub(e1.test_substitute(shadow), e2.test_substitute(shadow))
        // TODO Think of whether or not substitution should happen under closure
        //Closure(exp) -> exp.test_substitute(shadow)
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
fun args_and_vals(pat: patern, vals: expression, converter: (expression) -> <polymorphic_scope<a>|e> a) : <polymorphic_scope<a>|e> ()
    match (pat, vals)
        (Ident(name), _) -> padd(name, vals.converter)
        (NullPat, _) -> ()
        (Patpair(p1, p2), MLpair(e1, e2)) -> 
            args_and_vals(p1, e1, converter)
            args_and_vals(p2, e2, converter)
        _  -> ()


/*

                -⋄=  Actual Code =⋄-
    
    Here we'll house the actual code of the different
    code analysers as well as the interpreter.

*/

fun type_checker(inp: expression) : <div, exn, errors-and-warnings, polymorphic_scope<expr_val>, console>  expr_val
    match inp
        Num -> ENumber
        EFalse -> EBoolean
        ETrue -> EBoolean
        Variable(name) -> pget(name)
        //Lambda ->
        If (cond, thus, otherwise) ->
            if cond.type_checker != EBoolean then add_error("Conditional in if statement is not of type boolean")
            val thus_type = thus.type_checker
            val otherwise_type = otherwise.type_checker
            if thus_type != otherwise_type then add_error("Then and Else branch of if statement do not have the same type")
            thus_type
        MLpair(e1, e2) -> EPair(e1.type_checker, e2.type_checker)
        //Apply(func, arg_vals) ->
        Let (arg, arg_val, body) ->
            val old_scope = pget_state()
            args_and_vals(arg, arg_val, type_checker)
            val retval = body.type_checker
            pset_state(old_scope)
            retval
//        Letrec (arg, arg_val, body) ->


        _ -> ENumber


fun test_interpreter (inp: expression) : <div, exn, errors-and-warnings, polymorphic_scope<expression>, console> expression
    println("     test_interpreter: {" ++ inp.show ++ "}")
    match inp
        Num (n: int) -> Num(n)
        
        EFalse -> EFalse
        ETrue -> ETrue
        Variable    (name: string) -> 
            if !pscope_contains(name) 
            then 
                inp
                /*
                add_error("Variable '" ++ name ++ "' was not in scope")
                Null
                */
            else
                pget(name)
        Lambda      (arg: patern, body: expression) -> 
            // We want to shadow the arguments from the current scope and then substitute the current scope
            Lambda(arg, body.test_substitute(arg.patterns_to_string))
        If          (cond: expression, thus: expression, otherwise: expression) -> 
            var condition := False
            match test_interpreter(cond)
                EFalse -> condition := False
                ETrue -> condition := True
            if condition then thus.test_interpreter else otherwise.test_interpreter
            /*
            val th = interpreter(thus)
            val oth = interpreter(otherwise)
            if condition then th else oth
            */
        MLpair      (e1: expression, e2: expression) -> 
            MLpair(test_interpreter(e1), test_interpreter(e2))
        Apply       (func: expression, inp_vals: expression) ->
            match func.test_interpreter
                Lambda (args, body) ->
                    val old_scope = pget_state()
                    // lets hope that this next line does actually work... it at least doesn't throw errors
                    add_patterns_and_expressions(args, inp_vals).foreach(fn ((name, value)) { padd(name, value.test_interpreter)})
                    val retval = body.test_interpreter
                    pset_state(old_scope)
                    retval
                other -> 
                    add_error("The first argument of function application was not a function but was {" ++ other.show ++ "}")
                    Null

        Let         (arg: patern, arg_val: expression, body: expression) ->
            val old_scope = pget_state()
            // lets hope that this next line does actually work... it at least doesn't throw errors
            add_patterns_and_expressions(arg, arg_val).foreach(fn ((name, value)) { padd(name, value.test_interpreter)})
            val retval = body.test_interpreter
            pset_state(old_scope)
            retval
        Letrec      (arg: patern, arg_val: expression, body: expression) ->
            val old_scope = pget_state()
            // lets hope that this next line does actually work... it at least doesn't throw errors
            add_patterns_and_expressions(arg, arg_val).foreach(fn ((name, value)) { padd(name, value)})
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

        /*
        Expantion of the expression type to allow number operations, as this isn't possible when
        following the abstract data types laid out in the origional paper
        */
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
        //Closure(exp) -> exp.test_interpreter
        Null -> 
            add_error("Null value found, this is an error value")
            Null
            
        _ -> 
            add_error("Input {" ++ inp.show ++ "} was not processed in `test_interpreter`")
            Null

