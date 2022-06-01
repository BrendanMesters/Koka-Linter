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
import polymorphic-linters
    

fun main()
    ()





/*


        -= OLD CODE =-


val what_to_lint = 
    [
        False, // complex-linter/linter
        False,  // simple-linter/variable_scope_linter
        False,  // simple-linter/interpreter
        False, // Poly_interp
        True  // Poly_type_checker
    ]

//  -= Main Code =-

fun maybeq(v1: maybe<bool>, v2: maybe<bool>) : bool
    match (v1, v2) 
        (Nothing, Nothing) -> True
        (Just(a), Just(b)) -> a == b
        _ -> False

fun main(): <console, div, exn> () 
    var test: expression := EFalse
    var tmp : list<(string, expression)> := Nil 
    
    
    val program = prog_fact



    with errors_and_warnings_handler



    if (what_to_lint[0]).maybeq(Just (True))
    then
        with complex_scope_handeler()
        match linter(program)
            v -> printexpr(v)
            //_ -> println("Error, this code shouldn't be reachable (end of main)")
       
    if (what_to_lint[1]).maybeq(Just (True))
    then
        with simple_scope_handler
        variable_scope_linter(program)

    if (what_to_lint[2]).maybeq(Just (True))
    then
        with complex_scope_handeler
        interpreter(program).printexpr

    if (what_to_lint[3]).maybeq(Just (True))
    then
        with concretely_expression_based_scope_handler
        test_interpreter(program).printexpr
    if (what_to_lint[4]).maybeq(Just (True))
    then
        with concretely_type_based_scope_handler
        with type_unsure_function_handler
        type_checker(program).show.println

    print_errors_and_warnings(get_errors_and_warnings())
    println("done")
        
*/



/*
            -= Mini-ML Programs =-

Here we'll have variables containing various mini-ml
programs that can be loaded into the main function by
changing the `program` variable there.

*/


// simple ones

val prog_num = Num(42)
val prog_pair = MLpair(Num(42), Num(69))
val prog_bools = MLpair(EFalse, ETrue)
val prog_simple_let_var = Let(Ident("foo"), Num(42), Variable("foo"))
val prog_arithmatic = ESub(EMult(EAdd(Num(4), Num(2)), Num(12)), Num(3))


val prog_unass_var = Variable("test")
// actual programs

val prog_fact = 
    Letrec( 
        Ident("fact"),
        Lambda(
            Ident("x"), 
            If(
                Equals( Variable("x"), Num(0) ),
                Num(1),
                EMult(
                    Variable("x"), 
                    Apply(Variable("fact"), ESub(Variable("x"), Num(1)))
                )
            )),
        Apply(Variable("fact"), Num(10)))



// In lexical scoping it should eval to 4 
// where dynamic scoping gives us 3
// (we want lexical)

val prog_lex_vs_dyn = 
    Let (Ident("d"), Num(2),
        Letrec(Ident("f"), 
                Lambda(Ident("x"), 
                        EAdd(Variable("x"), 
                        Variable("d"))
                      ),
              Let(Ident("d"), Num(1),
                  Apply(Variable("f"), Num(2)) 
                )
              )
    )




