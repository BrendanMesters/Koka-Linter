import scope
import error-warning-handler
import language-constructs

fun main() : <console> ()
    println("ran")

/*
This effect handler should mimic the scope handler while also
checking for variable naming conventions.
Furthermore it should ignore all the other errors and warnings
usually produced by the code.
*/
fun variable_naming_scope_and_error_handler ( 
                    fun_to_exec: () -> <complex_scope,error-warning-handler,exn|e> a , 
                    init_val : list<(string, expression, int)> = Nil
                ) : <exn|e> a

    // A variable to keep track of the scope
    var scopeState : list<(string, expression, int)> := init_val

    // Variables to keep track or warnings and errors.
    var errors : list<string> := Nil
    var warnings : list<string> := Nil

    with handler
        fun scope_contains(name: string) 
            val predicate = fn (elem: (string, expression, int)) : bool {
                if elem.fst() == name then return True
                False }
            scopeState.any ( predicate)
        fun get(name) 
            match scopeState.find-maybe fn (elem: (string, expression, int)) : maybe<expression> {
                if elem.fst() == name then return Just(elem.snd)
                Nothing }
                Just(v) -> return v
                Nothing -> throw("Variable \'" ++ name ++ "\' not in scope.")
            /*scopeState.find-maybe fn (elem: (string, expression)) : exn expression
                if elem.fst() == name then return elem.snd
                throw("Variable \'" ++ name ++ "\' not in scope.")*/
        fun add(name: string, elem: expression) 
            scopeState := Cons((name, elem, int), scopeState)
            

        fun get_state() return scopeState.map
            fn (elem) (elem.fst, elem.snd)
        fun set_state(newState) scopeState := newState


        fun add_error(e) ()
        fun add_warning(w) ()
        get_errors_and_warnings() (errors, warnings)
    fun_to_exec()
/*
fun add_error(error: string): ()
    fun add_warning(warning: string): ()
    fun get_errors_and_warnings(): (list<string>, list<string>)