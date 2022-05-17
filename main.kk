/*

I will most likely implement a linter for the "Mini-ml" language,
Specifically the one described in the following article: https://www.cs.cmu.edu/~fp/courses/comp-ded/handouts/mini-ml.pdf
  
This is a simple Functional toy language, this decision has been made to avoid being stuck on simple implementation details, as these are not very usefull for learning aspects of EHOP.

*/

/*  
    -= Imports =-
*/

// Core
import language-constructs


// Effect Handlers
import scope
import error-warning-handler


// Running Code
import complex-linter
import simple-linter
    

//  -= Misc functions =-

fun printexpr(exp: expression) : console ()
    println(exp.show())

//  -= Misc Variables [-

val testbar = "je moeder"

val functie_jetser = Lambda (Patpair(Ident ("variable"), Ident("not a variable ;-)")), MLpair(Num (420), Num (69)))
val functie_jetser2 = Lambda (Patpair(Ident ("variable"), Ident("not a variable ;-)")), Variable("not a variable ;-)"))




val what_to_lint = 
    [
        False, // complex-linter/linter
        True,  // simple-linter/variable_scope_linter
        False, // WIP
        False, // WIP
        False  // WIP
    ]

//  -= Main Code =-

fun maybeq(v1: maybe<bool>, v2: maybe<bool>) : bool
    match (v1, v2) 
        (Nothing, Nothing) -> True
        (Just(a), Just(b)) -> a == b
        _ -> False

fun main () 
    var test: expression := EFalse
    var tmp : list<(string, expression)> := Nil 
    
    
    val program = If(Apply(functie_jetser2, (MLpair (ETrue, EFalse))), Variable("bestaat niet"), Variable("variable"))
    if (what_to_lint[0]).maybeq(Just (True))
    then
        with complex_scope_handeler()
        match linter(program)
            v -> printexpr(v)
            _ -> println("Error, this code shouldn't be reachable (end of main)")
        
        /*
        val error_printer = fn (error_val: exception) println(error_val.show())
        with scope_handeler()
        {
            match linter(program)
                v -> printexpr(v)
                _ -> println("Error, this code shouldn't be reachable (end of main)")
        }.try(error_printer)
        */
    if (what_to_lint[1]).maybeq(Just (True))
    then
        with errors_and_warnings_handler
        with simple_scope_handler
        variable_scope_linter(program)
        print_errors_and_warnings(get_errors_and_warnings())

    if (what_to_lint[2]).maybeq(Just (True))
    then
        println("Not yet ready")

    if (what_to_lint[3]).maybeq(Just (True))
    then
        println("Not yet ready")

    if (what_to_lint[4]).maybeq(Just (True))
    then
        println("Not yet ready")

    println("done")
        
