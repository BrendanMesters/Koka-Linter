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
    Lambda      (arg: patern, arg_type: expression_type, body: expression)
    If          (cond: expression, thus: expression, otherwise: expression)
    MLpair      (e1: expression, e2: expression)
    Apply       (e1: expression, e2: expression)
    Let         (arg: patern, arg_val: expression, body: expression)
    Letrec      (arg: patern, arg_type: expression_type, arg_val: expression, body: expression)
    Equals       (e1: expression, e2: expression)
    EMult        (e1: expression, e2: expression)
    EAdd         (e1: expression, e2: expression)
    ESub         (e1: expression, e2: expression)
//      -= Null is an Error Value =-
    Null


type expression_type
    ENumber
    EBoolean
    EPair(e1: expression_type, e2: expression_type)
    EFunc(from: expression_type, to: expression_type)
    // error value
    ENull 




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
        Lambda      (arg: patern, arg_type: expression_type, body: expression) -> "Function: with variable names: [" ++ arg.show ++ "]" ++ " of type ["++ arg_type.show ++ "] and body of: " ++ body.show
        If          (cond: expression, thus: expression, otherwise: expression) -> "If statement: if {" ++ cond.show ++ "} then {" ++ thus.show ++ "} else {" ++ otherwise.show ++ "}" 
        MLpair      (e1: expression, e2: expression) -> "Expression pair of: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        Apply       (e1: expression, e2: expression) -> "Application of: {" ++ e1.show ++ "} onto values {" ++ e2.show ++ "}"
        Let         (arg: patern, arg_val: expression, body: expression) -> "Let expression: let '" ++ arg.show ++ "' be {" ++ arg_val.show ++ "} in {" ++ body.show ++ "}"
        Letrec      (arg: patern, arg_type: expression_type, arg_val: expression, body: expression) -> "LetRec expression: letRec '" ++ arg.show ++ "' of type ["++ arg_type.show ++ "] be {" ++ arg_val.show ++ "} in {" ++ body.show ++ "}"
        Equals      (e1: expression, e2: expression) -> "Equality check: {" ++ e1.show ++ "} == {" ++ e2.show ++ "}"
        EMult       (e1: expression, e2: expression) -> "Arithmatic: Multiply on: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        EAdd        (e1: expression, e2: expression) -> "Arithmatic: Addition on: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        ESub        (e1: expression, e2: expression) -> "Arithmatic: Subtraction on: {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"
        //Closure     (exp: expression) -> "A bound expression of {" ++ exp.show ++ "}"
        Null                                         -> "Null expression - This is an Error Value"
        _ -> "Not a valid expression, note this should never be reached and is just here to catch possibly otherwise very obscure bugs that might be introduced in the future :-D"


fun show(exp: expression_type) : total string
    match exp
        ENumber -> "Expression type Number"
        EBoolean -> "Expression type Boolean"
        ENull -> "Expression error value ENull"
        EFunc(from, to) -> "Expression function type, from type [" ++ from.show ++ "] to type [" ++ to.show ++ "]"
        EPair(e1, e2) -> "Expression pair of {" ++ e1.show ++ "} and {" ++ e2.show ++ "}"



fun (==)(e1:expression_type, e2:expression_type) : <div> bool
    match (e1, e2)
        (ENumber, ENumber) -> True
        (EBoolean, EBoolean) -> True
        (EPair(a1, a2), EPair(b1, b2)) ->
            (a1 == b1) && (a2 == b2)
        (EFunc(a1, a2), EFunc(b1, b2)) ->
            (a1 == b1) && (a2 == b2)
        _ -> False

fun (!=)(e1: expression_type, e2: expression_type) : <div> bool
    !(e1 == e2)

fun patterns_to_string(args: patern) : <div> list<string>
    match args
        Ident(name) -> [name]
        NullPat -> Nil
        Patpair(p1, p2) -> [p1.patterns_to_string, p2.patterns_to_string].concat()



//      -=⋄ Old unused stuff ⋄=-

/*
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
*/