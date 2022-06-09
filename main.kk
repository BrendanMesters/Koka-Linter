/*

I will most likely implement a linter for the "Mini-ml" language,
Specifically the one described in the following article: https://www.cs.cmu.edu/~fp/courses/comp-ded/handouts/mini-ml.pdf
  
This is a simple Functional toy language, this decision has been made to avoid being stuck on simple implementation details, as these are not very usefull for learning aspects of EHOP.

*/

//      -⋄= imports =⋄-
// Core
import language-constructs

// Effect Handlers
import scope
import error-warning-handler

// Running Code
import polymorphic-linters




//      -⋄= Main Code =⋄-
fun main(): <console, div, exn> ()
    


    EAdd(Null, Num(12)).run_prog

    println("\n\n  «⋄» fact «⋄»")
    prog_fact.run_prog

    println("\n\n  «⋄» lex vs dyn «⋄»")
    prog_lex_vs_dyn.run_prog

    println("\n\n  «⋄» alpha reduction «⋄»")
    prog_alpha_reduction.run_prog

    println("\n\n  «⋄» is even «⋄»")
    prog_is_even.run_prog

    println("\n\n\n\n    -⋄= The Following code is SUPPOSED to throw errors =⋄-")

    println("\n\n  «⋄» Erronious program #1 «⋄»")
    prog_error_one.run_prog




fun run_prog(program: expression, what-to-run: (bool, bool) = (True, True)): <console, div, exn> ()
    with errors_and_warnings_handler
    if (what-to-run.fst)
    //    -= Interpreter =-    //
    then
        print("Interp:      ")
        with concretely_expression_based_scope_handler
        test_interpreter(program).show.println
    if (what-to-run.snd)
    //    -= Type checker =-    //
    then
        print("Type check:  ")
        with concretely_type_based_scope_handler
        type_checker(program).show.println
    println("-----------------------------------")
    print_errors_and_warnings(get_errors_and_warnings())
    println("done")
        




/*
            -= Mini-ML Programs =-

Here we'll have variables containing various mini-ml
programs that can be loaded into the main function by
changing the `program` variable there.

These programs are designed to test the interpreter and
the type checker that I created for mini-ml

*/



//        «⋄» Correct Programs «⋄»

// Programs that are supposed to compile and
// give an output without throwing any errors
// or warnings.
// -----============================-----

// Calculates the factorial of the 
// number in the last apply.
val prog_fact = 
    Letrec( 
        Ident("fact"), 
        EFunc(ENumber, ENumber),
        Lambda(
            Ident("x"), ENumber,
            If(
                Equals( Variable("x"), Num(0) ),
                Num(1),
                EMult(
                    Variable("x"), 
                    Apply(Variable("fact"), ESub(Variable("x"), Num(1)))
                )
            )),
        Apply(Variable("fact"), Num(10)))


// Checks if lexical or dynamic scoping is used
val prog_lex_vs_dyn = 
    Let (
      Ident("d"), Num(2),
      Letrec(
        Ident("f"), EFunc(ENumber, ENumber),
        Lambda(
          Ident("x"), ENumber,
          EAdd(
            Variable("x"), 
            Variable("d")
          )
        ),
        Let(
          Ident("d"), Num(1),
          Apply(Variable("f"), Num(2)) 
        )
      )
    )


// Lambda calculus expression of:
// (λx . (λx . + (− x 1)) x 3) 9         (found at: https://www.tutorialspoint.com/functional_programming/functional_programming_lambda_calculus.htm)
// Result should be 11.
val prog_alpha_reduction = Apply(
  Lambda(
    Ident("x"), ENumber,
    EAdd(
      Apply(
        Lambda(
          Ident("x"), ENumber,
          
          ESub(Variable("x"), Num(1))
        ),
        Variable("x")
      ),
      Num(3)
    )
  ),
  Num(9)
)

val prog_is_even = Letrec(
      Ident("is_even"), EFunc(ENumber, EBoolean),
      Lambda(
        Ident("x"), ENumber,
        If (Equals(Variable("x"), Num(0)),
          ETrue,
          If (Equals(Variable("x"), Num(1)),
            EFalse,
            Apply(Variable("is_even"), ESub(Variable("x"), Num(2)))

          )
        )
      ),
      Apply(Variable("is_even"), Num(22))
    )
 






//    «⋄» (Intentionally) Erronious Programs «⋄»

// The following programs have been created to have errors
// by design. Since our type checker and interpreter should
// throw errors on faulty code it is also important to make
// sure that this happens consistently.

// -----============================-----

val prog_error_one = Apply(
  Lambda(
    Ident("f"), EFunc(ENumber, EBoolean),
    Apply(Variable("f"), Num(42069))
  ),
  If(
    EFalse,
    Lambda(
      Ident("x"), ENumber,
      Equals(Variable("x"), Num(69420))
    ),
    Letrec(
      Ident("is_even"), EFunc(ENumber, EBoolean),
      Lambda(
        Ident("x"), ENumber,
        If (Equals(Variable("x"), Num(0)),
          ETrue,
          If (Equals(Variable("x"), Num(1)),
            EFalse,
            Apply(Variable("is_even"), ESub(Variable("x"), Num(2)))

          )
        )
      ),
      Variable("is_even")
    )
  
  )

)






/*

      -»⋄ Failed programs ⋄«-

These programs are, for differing reasons, not used anymore
This place is thus more of a storage for old programs

------==========================================-------


// To simple, they where mostly used to experiment with
the interpreters during early testing.

val prog_num = Num(42)
val prog_pair = MLpair(Num(42), Num(69))
val prog_bools = MLpair(EFalse, ETrue)
val prog_simple_let_var = Let(Ident("foo"), Num(42), Variable("foo"))
val prog_arithmatic = ESub(EMult(EAdd(Num(4), Num(2)), Num(12)), Num(3))
val prog_unass_var = Variable("test")




// Explanation: The letrec should be outside of the apply.

val prog_complex_one = Apply(
  Lambda(
    Ident("f"), EFunc(ENumber, EBoolean),
    Apply(Variable("f"), Num(42069))
  ),
  If(
    EFalse,
    Lambda(
      Ident("x"), ENumber,
      Equals(Variable("x"), Num(69420))
    ),
    Letrec(
      Ident("is_even"), EFunc(ENumber, EBoolean),
      Lambda(
        Ident("x"), ENumber,
        If (Equals(Variable("x"), Num(0)),
          ETrue,
          If (Equals(Variable("x"), Num(1)),
            EFalse,
            Apply(Variable("is_even"), ESub(Variable("x"), Num(2)))

          )
        )
      ),
      Variable("is_even")
    )
  
  )

)


*/