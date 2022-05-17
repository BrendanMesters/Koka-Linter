


import language-constructs

/*
     -{=  Scope  =}-
*/
effect complex_scope
    fun scope_contains(name: string) : bool 
    fun get(name: string) : expression
    fun add(name: string, value: expression) : ()
    fun get_state() : list<(string, expression)>
    fun set_state(newState: list<(string, expression)>) : ()
    


//fun local (fun_to_exec: () -> (scope, exn|e> a), newvar: string) : <scope,exn|e> a


fun complex_scope_handeler( fun_to_exec: () -> <complex_scope,exn|e> a , init_val : list<(string, expression)> = Nil) : <exn|e> a
    var scopeState : list<(string, expression)> := init_val
    //var test: expression := EFalse

    with handler
        fun scope_contains(name: string) 
            val predicate = fn (elem: (string, expression)) : bool {
                if elem.fst() == name then return True
                False }
            scopeState.any ( predicate)
        fun get(name) 
            match scopeState.find-maybe fn (elem: (string, expression)) : maybe<expression> {
                if elem.fst() == name then return Just(elem.snd)
                Nothing }
                Just(v) -> return v
                Nothing -> throw("Variable \'" ++ name ++ "\' not in scope.")
            /*scopeState.find-maybe fn (elem: (string, expression)) : exn expression
                if elem.fst() == name then return elem.snd
                throw("Variable \'" ++ name ++ "\' not in scope.")*/
        fun add(name: string, elem: expression) scopeState := Cons((name, elem), scopeState)
        fun get_state() return scopeState
        fun set_state(newState) scopeState := newState
    fun_to_exec()


fun add_func_args_to_scope(args: patern, vals: expression) : <exn,div,complex_scope> ()
    match (args, vals)
        (Ident (name), v) -> add(name, v)
        (Patpair (p1, p2), MLpair (v1, v2)) ->
            add_func_args_to_scope(p1, v1)
            add_func_args_to_scope(p2, v2)
        _ -> throw ("Add_func_args_to_scope invalid option of pattern: {" ++ args.show ++ "} and expressions of: {" ++ vals.show ++ "}")

/*
     -{=  End of Scope  =}-
*/


// A simpeler version of scope only caring about names
effect simple_scope
    fun in_scope(name: string): bool
    fun add_to_scope(name: string) : ()
    fun get_internal_state() : list<string>
    fun set_internal_state(state: list<string>) : ()


fun simple_scope_handler (fun_to_exec: () -> <simple_scope,exn|e> a, init_val: list<string> = Nil) : <exn|e> a
    var scopeState : list<string> := init_val

    with handler
        fun in_scope(name) scopeState.any(fn (v) {v == name})
        fun add_to_scope(name) scopeState := Cons(name, scopeState)
        fun get_internal_state() scopeState
        fun set_internal_state(state) scopeState := state
    fun_to_exec()
