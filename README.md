# The effect of EHOP on the writing of program analysis tools


Welcome, this is the github repository for the Research Project of Brendan Mesters, in the year 2022.

This is the github page for the research project of Brendan Mesters.
This reserach project aims to find out if the new proposed programming 
paradigm of Effect Handler Oriented Programming (EHOP) is usefull for
the programming of program analysis tools.

In this project I have created a type checker and an interpreter for the
functional toy language called _[Mini-ML](https://www.cse.chalmers.se/edu/year/2018/course/DAT350/Kahn.pdf)_.

---

## Code structure

The folder `old files` can be ignored, this contains files that shouldn't be discarded but are not currently part of the code base discussed in my paper.

- `main.kk`: The main file is used to run the code, this can be done with the command `koka -e main.kk`. The main file contants multiple programs written in my internal representation of Mini-ML and runs them both trough the interpreter and the type checker.
- `language-contructs.kk`: This file contains, as one might have already guessed, the internal represenation of Mini-ML.
It followed the specifications laid down by G. Kahn in his article [Natural Semantics](https://www.cse.chalmers.se/edu/year/2018/course/DAT350/Kahn.pdf) with a few exceptions. 
The article doesn't specifically add a way to manipulate numbers, which I have added in the form of a multiply, adition and substraction primitive. 
It also doesn't mention expression types which I've added (as type checking becomes far to complex for a bachelors final project without some type anotation). 
And lastly it required that lambdas as well as recursive let bindings denote the types of their variables, which the origional paper does not do.
The file also contains some general helper functions, such as `show`.
- `error-warning-handler.kk`: Implements the `errors-and-warnings` effet as well as an effect handler for this effect and a function to print the errors and warnings.
- `scope.kk`: Implementes a polymorphic scope effect which also allows for delayed interpretation of expressions via the concrete `Actual_closure` values of the `closure` type.
The `concretely_type_based_scope_handler` is used by the type checker and handles a polymorphic scope of type `polymorphic_scope<expression_type>`.
The `concretely_expression_based_scope_handler` on the other hand does the same but for the interpreter and using `expression` as the polymorphic type.
- `polymorphic-linter.kk`: This file contains both the type checker as well as the interpreter. 
It contains the helper functions: `test_substitute` which substitutes a scope into an expression unless the variable name is present in `shadow`; `args_and_vals` which takes a pattern, an expression and adds them to the scope. `converter` and `use_closure` are used to evaluate the expression to the correct scope value or to delay interpretation and use closure; `args_and_types` is a helper function only used in the type checker which takes a pattern and an expression type and adds them to the scope.
The file also contains a `type_checker` function which takes an expression and returns the type of the expression and adds errors and warnings if applicable.
Lastly it contains the `test_interpreter` function (_note, the 'test' in both `test_interpreter` and `test_substitute` don't have any actual meaning and should be removed, I have just not yet had the time to do so..._) which takes an expression and tries to interpret it down to the most compact expression (probably a combination of `Num`, `EFalse`, `ETrue`, `Pair` and `Lambda`)






