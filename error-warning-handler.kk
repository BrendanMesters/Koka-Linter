/*
A side effect meant to store errors and warnings
*/


effect errors-and-warnings
    fun add_error(error: string): ()
    fun add_warning(warning: string): ()
    fun get_errors_and_warnings(): (list<string>, list<string>)


/* 
The `exn` handler is requested for both but not really used, as otherwise I get the error:
  '(1, 0): error: Effects can only have one extension point (use a `|` instead of a comma in the effect type ?)'
*/
fun errors_and_warnings_handler(fun_to_exec : () -> <errors-and-warnings,exn|e> a) : <exn|e> a
    var errors : list<string> := Nil
    var warnings : list<string> := Nil
    
    with handler
        fun add_error(error) errors := Cons(error, errors)
        fun add_warning(warning) warnings := Cons(warning, warnings)
        fun get_errors_and_warnings() (errors, warnings)

    fun_to_exec()


fun print_errors_and_warnings(inp: (list<string>, list<string>))
    println("errors:")
    inp.fst.foreach(fn (str) {print("  ");println(str)})
    if inp.fst.length == 0 then println("  no errors. :-D")
    println("warnings:")
    inp.snd.foreach(fn (str) {print("  ");println(str)})
    if inp.snd.length == 0 then println("  no warnings. :-)")