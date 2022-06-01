fun test_interpreter (inp: expression) : <div, exn, errors-and-warnings, polymorphic_scope<expression>, console> expression
    //println("     test_interpreter: {" ++ inp.show ++ "}")
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
                match pget(name)
                    Direct_value(v) -> v
                    Actual_closure(e, clos) ->
                        // Save the old scope
                        val old_scope = pget_state()
                        // Apply the closure scope
                        pset_state(clos)

                        // interpret the statement with the closed scope
                        val retval = e.test_interpreter()

                        // Restore the old scope 
                        pset_state(old_scope)
                        //retval
                        retval
        Lambda      (arg: patern, body: expression) -> 
            // We want to shadow the arguments from the current scope and then substitute the current scope
            Lambda(arg, body.test_substitute(arg.patterns_to_string))
        If          (cond: expression, thus: expression, otherwise: expression) -> 
            var condition := False
            match test_interpreter(cond)
                EFalse -> condition := False
                ETrue -> condition := True
                _ ->
                    add_error("If's conditional statement was not of type boolean")
                    return Null
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
                    // add_patterns_and_expressions(args, inp_vals).foreach(fn ((name, value)) { padd(name, value.test_interpreter)})
                    args_and_vals(args, inp_vals, test_interpreter)
                    val retval = body.test_interpreter
                    pset_state(old_scope)
                    retval
                other -> 
                    add_error("The first argument of function application was not a function but was {" ++ other.show ++ "}")
                    Null

        Let         (arg: patern, arg_val: expression, body: expression) ->
            val old_scope = pget_state()
            // lets hope that this next line does actually work... it at least doesn't throw errors
            // add_patterns_and_expressions(arg, arg_val).foreach(fn ((name, value)) { padd(name, value.test_interpreter)})
            args_and_vals(arg, arg_val, test_interpreter)
            val retval = body.test_interpreter
            pset_state(old_scope)
            retval

/*
let name val body
letrec name val body
*/
        Letrec      (arg: patern, arg_val: expression, body: expression) ->
            val old_scope = pget_state()
            // lets hope that this next line does actually work... it at least doesn't throw errors
            // add_patterns_and_expressions(arg, arg_val).foreach(fn ((name, value)) { padd(name, value)})
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
        Null -> 
            add_error("Null value found, this is an error value")
            Null
            
        _ -> 
            add_error("Input {" ++ inp.show ++ "} was not processed in `test_interpreter`")
            Null

