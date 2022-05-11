/*

The type definitions for the mini-ml language

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

