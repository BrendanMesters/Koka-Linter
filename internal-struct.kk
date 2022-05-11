/*

I will most likely implement a linter for the "Mini-ml" language,
Specifically the one described in the following article: https://www.cs.cmu.edu/~fp/courses/comp-ded/handouts/mini-ml.pdf
  
This is a simple Functional toy language, this decision has been made to avoid being stuck on simple implementation details, as these are not very usefull for learning aspects of EHOP.

*/

import language-constructs

type result
    Value (exp: expression)
    ResultError (s: string)

fun printexpr(exp: expression) : console ()
    println(exp.show())


effect scope
    fun get(name: string) : expression
    fun add(name: string, value: expression) : ()

fun scope_handeler( fun_to_exec: () -> <scope,exn|e> a) : <exn|e> a
    var scopeState : list<(string, expression)> := Nil 
    //var test: expression := EFalse
    with handler
        fun get(name) 
            match scopeState.find-maybe fn (elem: (string, expression)) : maybe<expression> {
                if elem.fst() == name then return Just(elem.snd)
                Nothing }
                Just(v) -> v
                Nothing -> throw("Variable \'" ++ name ++ "\' not in scope.")
            /*scopeState.find-maybe fn (elem: (string, expression)) : exn expression
                if elem.fst() == name then return elem.snd
                throw("Variable \'" ++ name ++ "\' not in scope.")*/
        fun add(name: string, elem: expression) scopeState := Cons((name, elem), scopeState)
    fun_to_exec()

fun main () 
    var test: expression := EFalse
    var tmp : list<(string, expression)> := Nil 
    with scope_handeler()
    match linter(Lambda (Patpair(Ident ("variable"), Patpair(NullPat, Ident("not a variable ;-)"))), MLpair(Num (420), Num (69))))
    //match linter(Variable ("boe"))
        v -> printexpr(v)
        _ -> println("Error, this code shouldn't be reachable (end of main)")





fun linter (inp: expression) : <div, exn, scope, console>  expression
    match inp
        Variable    (name) -> get(name) /* 
            match get(name)
                Nothing -> throw ("Variable \'" ++ name ++ "\' not in scope")
                Just (newval) -> linter(newval) */
            
        Lambda      (arg, body) -> throw("Function found that isn't applied.")//(Lambda (arg, linter(body)))
        If          (cond, thus, otherwise) -> 
            match linter(cond)
                (ETrue) -> linter(thus)
                (EFalse) -> linter(otherwise)
                (errval) -> throw ("Conditional part of if statement not of type boolean, instead it was: "  ++ errval.show())
        MLpair      (e1, e2) -> MLpair(linter(e1), linter(e2))
        Apply       (func, args) -> 
            match func
                Lambda -> EFalse
                Variable -> EFalse
                a -> throw ("Apply can only be called on a function, not on: " ++ a.show)


        Let         (arg, arg_val, body) -> EFalse
        Letrec      (arg, arg_val, body) -> EFalse
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