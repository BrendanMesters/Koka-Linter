/*

The type definitions for the mini-ml language

https://link-springer-com.tudelft.idm.oclc.org/content/pdf/10.1007/BFb0039592.pdf

*/

// For the add_patterns_and_expressions function
import error-warning-handler


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
    Equals       (e1: expression, e2: expression)
    EMult        (e1: expression, e2: expression)
    EAdd         (e1: expression, e2: expression)
    ESub         (e1: expression, e2: expression)

    // -= Error Value =-
    Null


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
        Equals      (e1: expression, e2: expression) -> "Equality check: {" ++ e1.show ++ "} == {" ++ e2.show ++ "}"
        EMult       (e1: expression, e2: expression) -> "Arithmatic: Multiply on: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        EAdd        (e1: expression, e2: expression) -> "Arithmatic: Addition on: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        ESub        (e1: expression, e2: expression) -> "Arithmatic: Subtraction on: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        Null                                         -> "Null expression - This is an Error Value"
        _ -> "Not a valid expression, note this should never be reached and is just here to catch possibly otherwise very obscure bugs that might be introduced in the future :-D"




fun printexpr(exp: expression) : console ()
    println("Expression print: " ++ exp.show())




fun patterns_to_string(args: patern) : <div> list<string>
    match args
        Ident(name) -> [name]
        NullPat -> Nil
        Patpair(p1, p2) -> [p1.patterns_to_string, p2.patterns_to_string].concat()


fun add_patterns_and_expressions(pat: patern, expr: expression) : <div,errors-and-warnings> list<(string, expression)>
    match (pat, expr)
        (Ident (name), value) ->  [(name, value)]
        (NullPat, value) -> 
            add_warning("Nullpat encountered in variable binding, unused value was: {" ++ value.show ++ "}")
            []
        (Patpair(p1, p2), MLpair(v1, v2)) -> 
            [add_patterns_and_expressions(p1, v1), add_patterns_and_expressions(p2, v2)].concat
        _ -> 
            add_error("Type mismatch during variable binding, pattern was: {" ++ pat.show ++ "} and value was {" ++ expr.show ++ "}")
            []
