/*

I will most likely implement a linter for the "Mini-ml" language,
Specifically the one described in the following article: https://www.cs.cmu.edu/~fp/courses/comp-ded/handouts/mini-ml.pdf
  
This is a simple Functional toy language, this decision has been made to avoid being stuck on simple implementation details, as these are not very usefull for learning aspects of EHOP.

*/


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

type result
    Value (exp: expression)
    ResultError (s: string)

fun show(pat: patern) : total string
    match pat
        Ident (name) -> "Pattern: '" ++ name ++ "'"
        NullPat -> "NULLPat"
        Patpair (p1, p2) -> "Patpair: ({" ++ p1.show ++ "}, {" ++ p2.show ++ "})"

fun show(exp: expression) : total string
    match exp
        Num(n) -> "Value: num " ++ (n.show())
        EFalse -> "Value: false"
        ETrue -> "Value: true"
        Variable(name) -> "Variable: \"" ++ name ++ "\""
        //Lambda(args, body) -> println("Function: (")
        Lambda      (arg: patern, body: expression) -> "Function: with variable names: [" ++ arg.show ++ "]" ++ " and body of: " ++ body.show
        If          (cond: expression, thus: expression, otherwise: expression) -> "If statement: if {" ++ cond.show ++ "} then {" ++ thus.show ++ "} else {" ++ otherwise.show ++ "}" 
        MLpair      (e1: expression, e2: expression) -> "Expression pair of: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        Apply       (e1: expression, e2: expression) -> "Application of: {" ++ e1.show ++ "} onto values {" ++ e2.show ++ "}"
        Let         (arg: patern, arg_val: expression, body: expression) -> "Let expression: let '" ++ arg.show ++ "' be {" ++ arg_val.show ++ "} in {" ++ body.show ++ "}"
        Letrec      (arg: patern, arg_val: expression, body: expression) -> "LetRec expression: letRec '" ++ arg.show ++ "' be {" ++ arg_val.show ++ "} in {" ++ body.show ++ "}"
        _ -> "Not a valid expression, note this should never be reached and is just here to catch possibly otherwise very obscure bugs that might be introduced in the future :-D"


fun printexpr(exp: expression) : console ()
    println(exp.show())


effect scope
    fun get(name: string) : maybe<expression>
    fun add(name: string, value: expression) : ()

fun scope_handeler( fun_to_exec: () -> <scope|e> a) : e a
    var scopeState : list<(string, expression)> := Nil 
    //var test: expression := EFalse
    with handler
        fun get(name) 
            scopeState.find-maybe fn (elem: (string, expression)) : maybe<expression>
                if elem.fst() == name then return Just(elem.snd)
                return Nothing
        fun add(name: string, elem: expression) scopeState := Cons((name, elem), scopeState)
    fun_to_exec()

fun main () 
    var test: expression := EFalse
    var tmp : list<(string, expression)> := Nil 
    with scope_handeler()
    match linter(Lambda (Patpair(Ident ("variable"), Patpair(NullPat, Ident("not a variable ;-)"))), MLpair(Num (420), Num (69))))
        Value (v) -> printexpr(v)
        ResultError (s) -> println("Error \"" ++ s ++ "\"")





fun linter (inp: expression) : <div, exn, scope, console> result
    match inp
        Variable    (name) -> 
            match get(name)
                Nothing -> return ResultError ("Variable \'" ++ name ++ "\' not in scope")
                Just (newval) -> linter(newval)
            
        Lambda      (arg, body) -> 
            match linter (body)
                ResultError(s) -> ResultError (s)
                Value(bd) -> Value(Lambda (arg, bd))
        If          (cond, thus, otherwise) -> 
            match linter(cond)
                ResultError (s) -> ResultError (s)
                Value (ETrue) -> linter(thus)
                Value (EFalse) -> linter(otherwise)
                Value (errval) -> ResultError ("Conditional part of if statement not of type boolean, instead it was: "  ++ errval.show())
        MLpair      (e1, e2) -> 
            match linter(e1)
                ResultError (s) -> ResultError (s)
                Value(nv1) -> match linter(e2)
                    ResultError (s) -> ResultError (s)
                    Value(nv2) -> Value (MLpair(nv1, nv2))
        Apply       (e1, e2) -> Value(EFalse)
        Let         (arg, arg_val, body) -> Value(EFalse)
        Letrec      (arg, arg_val, body) -> Value(EFalse)
        _ -> Value (inp)

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