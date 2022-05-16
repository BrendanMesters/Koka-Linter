import scope
import language-constructs

fun linter (inp: expression) : <div, exn, my_scope, console>  expression
    match inp
        Variable    (name) -> get(name) /* 
            match get(name)
                Nothing -> throw ("Variable \'" ++ name ++ "\' not in scope")
                Just (newval) -> linter(newval) */
            
        Lambda      (arg, body) -> /*throw("Function found that isn't applied.")*/(Lambda (arg, body))
        If          (cond, thus, otherwise) -> 
            match linter(cond)
                (ETrue) -> linter(thus)
                (EFalse) -> linter(otherwise)
                (errval) -> throw ("Conditional part of if statement not of type boolean, instead it was: "  ++ errval.show())
        MLpair      (e1, e2) -> MLpair(linter(e1), linter(e2))
        Apply       (func, vals) -> 
            match func
                Lambda (args, body) -> EFalse /*
                    with scope_handeler
                        add_func_args_to_scope(args, vals)
                        linter(body)*/
                Variable (name) -> 
                    linter(Apply (name.get, vals))
                a -> throw ("Apply can only be called on a function, not on: " ++ a.show)


        Let         (arg, arg_val, body) -> EFalse
        Letrec      (arg, arg_val, body) -> EFalse
        EMult       (e1, e2) ->
            match (linter(e1), linter(e2))
                (Num(a), Num(b)) -> Num(a * b)
                (a, b) -> throw ("EMult can only be applied on two numbers, not a {" ++ a.show ++ "} and an {" ++ b.show ++ "}")
        EAdd        (e1, e2) ->
            match (linter(e1), linter(e2))
                (Num(a), Num(b)) -> Num(a + b)
                (a, b) -> throw ("EAdd can only be applied on two numbers, not a {" ++ a.show ++ "} and an {" ++ b.show ++ "}")
        ESub        (e1, e2) ->
            match (linter(e1), linter(e2))
                (Num(a), Num(b)) -> Num(a - b)
                (a, b) -> throw ("ESub can only be applied on two numbers, not a {" ++ a.show ++ "} and an {" ++ b.show ++ "}")
        _ -> inp

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