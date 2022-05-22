import scope
import language-constructs
import error-warning-handler

fun not_main(): <console> ()
  println("run")


/*
Lints a piece of code to see if all the variable names are in scope. doesn't check variable value
*/
fun variable_scope_linter (inp: expression) : <div, exn, errors-and-warnings, simple_scope, console>  ()
    match inp
        Variable    (name) -> if !in_scope(name) then add_error("Variable '" ++ name ++ "' was not in scope.")
        Lambda      (arg, body) -> add_warning("Lambda function with arguments {" ++ arg.show ++ 
                                      "} and body {" ++ body.show ++ "} was found outside of application.")
        If          (cond, thus, otherwise) -> 
            variable_scope_linter(cond)
            variable_scope_linter(thus)
            variable_scope_linter(otherwise)
        MLpair      (e1, e2) -> 
            variable_scope_linter(e1)
            variable_scope_linter(e2)
        Apply       (func, _) -> 
            match func
                Lambda (args, body) ->
                    val old_state = get_internal_state()
                    args.patterns_to_string.foreach(fn (varname) add_to_scope(varname))
                    variable_scope_linter(body)
                    set_internal_state(old_state)
                Variable (name) ->  if !in_scope(name) then add_error("Variable '" ++ name ++ "' was not in scope.")
                    else add_warning("Variable '" ++ name ++ "' has been found in apply and the value that it holds has not yet been checked.")
                a -> add_error("Apply can only be called on a function, not on: " ++ a.show)


        Let         (arg, _, body) -> 
            val old_state = get_internal_state()
            arg.patterns_to_string.foreach(fn (varname) add_to_scope(varname))
            variable_scope_linter(body)
            set_internal_state(old_state)
        Letrec      (arg, _, body) -> 
            val old_state = get_internal_state()
            arg.patterns_to_string.foreach(fn (varname) add_to_scope(varname))
            variable_scope_linter(body)
            set_internal_state(old_state)
        EMult       (e1, e2) ->
            variable_scope_linter(e1)
            variable_scope_linter(e2)
        EAdd        (e1, e2) ->
            variable_scope_linter(e1)
            variable_scope_linter(e2)
        ESub        (e1, e2) ->
            variable_scope_linter(e1)
            variable_scope_linter(e2)
        _ -> ()

    /*
    scope_add("test", ETrue)
    scope_get("test")
    */

        /*
        fun scope_get(name) Just(test)
            /*scopeState.find-maybe fn (elem: (string, expression)) : maybe<expression>
                if elem.fst() == name then return Just(elem.snd)
                return Nothing*/
        fun scope_add(name: string, elem: expression) test := ETrue
            /*tmp := Cons((name, elem), scopeState)
            scopeState := tmp
            tmp := Nil*/
    match linter(EFalse)
        Just(v) -> printexpr(v)*/


/*
type patern
    Ident (name: string)
    NullPat
    Patpair (p1: patern, p2: patern)

type expression
    Num (n: int)
    EFalse
    ETrue
    Variable    (name: string)
    Lambda      (arg: patern, body: expression)
    If          (cond: expression, thus: expression, otherwise: expression)
    MLpair      (e1: expression, e2: expression)
    Apply       (e1: expression, e2: expression)
    Let         (arg: patern, arg_val: expression, body: expression)
    Letrec      (arg: patern, arg_val: expression, body: expression)

    /*
    Expantion of the expression type to allow number operations, as this isn't possible when
    following the abstract data types laid out in the origional paper
    */
    EMult        (e1: expression, e2: expression)
    EAdd         (e1: expression, e2: expression)
    ESub         (e1: expression, e2: expression)
*/
/*
Lints a piece of code to see if all the applications of functionality use the correct expression type.
*/
fun variable_type_linter (inp: expression) : <div, exn, errors-and-warnings, complex_scope, console>  expression
    match inp
        Num (n: int) -> Num(n)
        EFalse -> EFalse
        ETrue -> ETrue
        Variable    (name: string) -> 
            if !scope_contains(name) 
            then 
                add_error("Variable '" ++ name ++ "' was not in scope")
                Null
            else
                get(name)
        Lambda      (arg: patern, body: expression) -> 
            //add_warning ("Unapplied Lambda found with args {" ++ arg.show ++ "} and body {" ++ body.show ++ "}")
            inp
        If          (cond: expression, thus: expression, otherwise: expression) -> 
            var condition := False
            match variable_type_linter(cond)
                EFalse -> condition := False
                ETrue -> condition := True
            if condition then thus.variable_type_linter else otherwise.variable_type_linter
            /*
            val th = variable_type_linter(thus)
            val oth = variable_type_linter(otherwise)
            if condition then th else oth
            */
        MLpair      (e1: expression, e2: expression) -> 
            MLpair(variable_type_linter(e1), variable_type_linter(e2))
        Apply       (func: expression, inp_vals: expression) ->
            match func
                Lambda (args, body) ->
                    val old_scope = get_state()
                    // lets hope that this next line does actually work... it at least doesn't throw errors
                    add_patterns_and_expressions(args, inp_vals).foreach(fn ((name, value)) { add(name, value.variable_type_linter)})
                    val retval = body.variable_type_linter
                    set_state(old_scope)
                    retval
                Variable (name) -> Apply (variable_type_linter(func), inp_vals).variable_type_linter
                other -> 
                    add_error("The first argument of function application was not a function but was {" ++ other.show ++ "}")
                    Null

        Let         (arg: patern, arg_val: expression, body: expression) ->
            val old_scope = get_state()
            // lets hope that this next line does actually work... it at least doesn't throw errors
            add_patterns_and_expressions(arg, arg_val).foreach(fn ((name, value)) { add(name, value.variable_type_linter)})
            val retval = body.variable_type_linter
            set_state(old_scope)
            retval
        Letrec      (arg: patern, arg_val: expression, body: expression) ->
            val old_scope = get_state()
            // lets hope that this next line does actually work... it at least doesn't throw errors
            add_patterns_and_expressions(arg, arg_val).foreach(fn ((name, value)) { add(name, value.variable_type_linter)})
            val retval = body.variable_type_linter
            set_state(old_scope)
            retval
        Equals      (e1: expression, e2: expression) ->
            match (e1.variable_type_linter, e2.variable_type_linter)
                (Num(n1), Num(n2)) -> if n1 == n2 then ETrue else EFalse
                (EFalse, EFalse) -> ETrue
                (ETrue, ETrue) -> ETrue
                (MLpair(a1, a2), MLpair(b1, b2)) -> 
                    match (Equals(a1, b1).variable_type_linter, Equals(a2, b2).variable_type_linter)
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
            match (e1.variable_type_linter, e2.variable_type_linter)
                (Num(n1), Num(n2)) -> Num(n1 * n2)
                (val1, val2) -> 
                    add_error("Arithmatic operation didn't have two numbers as input, instead it found {" ++ val1.show ++ "} and {" ++ val2.show ++ "}")
                    Null
        EAdd         (e1: expression, e2: expression) ->
            match (e1.variable_type_linter, e2.variable_type_linter)
                (Num(n1), Num(n2)) -> Num(n1 + n2)
                (val1, val2) -> 
                    add_error("Arithmatic operation didn't have two numbers as input, instead it found {" ++ val1.show ++ "} and {" ++ val2.show ++ "}")
                    Null
        ESub         (e1: expression, e2: expression) ->
            match (e1.variable_type_linter, e2.variable_type_linter)
                (Num(n1), Num(n2)) -> Num(n1 - n2)
                (val1, val2) -> 
                    add_error("Arithmatic operation didn't have two numbers as input, instead it found {" ++ val1.show ++ "} and {" ++ val2.show ++ "}")
                    Null

        Null -> 
            add_error("Null value found, this is an error value")
            Null