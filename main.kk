/*

I will most likely implement a linter for the "Mini-ml" language,
Specifically the one described in the following article: https://www.cs.cmu.edu/~fp/courses/comp-ded/handouts/mini-ml.pdf
  
This is a simple Functional toy language, this decision has been made to avoid being stuck on simple implementation details, as these are not very usefull for learning aspects of EHOP.

*/

//  -= Imports =-

import language-constructs
import scope
import complex-linter
    

//  -= Misc functions =-

fun printexpr(exp: expression) : console ()
    println(exp.show())

//  -= Misc Variables [-

val testbar = "je moeder"

val functie_jetser = Lambda (Patpair(Ident ("variable"), Ident("not a variable ;-)")), MLpair(Num (420), Num (69)))
val functie_jetser2 = Lambda (Patpair(Ident ("variable"), Ident("not a variable ;-)")), Variable("not a variable ;-)"))




//  -= Main Code =-

fun main () 
    var test: expression := EFalse
    var tmp : list<(string, expression)> := Nil 
    with scope_handeler()
    match linter(If(Apply(functie_jetser2, (MLpair (ETrue, EFalse))), Variable("bestaat niet"), Variable("variable")))
    //match linter(Variable ("boe"))
        v -> printexpr(v)
        _ -> println("Error, this code shouldn't be reachable (end of main)")
