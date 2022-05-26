


import language-constructs



effect polymorphic_scope<a>
    fun pscope_contains(name: string) : bool
    fun pget(name: string) : a
    fun padd(name: string, value: a) : ()
    fun pget_state() : list<(string, a)>
    fun pset_state(newState: list<(string, a)>) : ()


fun concretely_type_based_scope_handler(fun_to_exec: () -> <polymorphic_scope<expr_val>,exn|e> a , init_val : list<(string, expr_val)> = Nil) : <exn|e> a
 
    var scopeState := init_val
    //var test: expression := EFalse
    with handler
        fun pscope_contains(name: string) 
            val predicate = fn (elem: (string, expr_val)) : bool {
                if elem.fst() == name then return True
                False }
            scopeState.any ( predicate)
        fun pget(name) 
            match scopeState.find-maybe fn (elem: (string, expr_val)) : maybe<expr_val> {
                if elem.fst() == name then return Just(elem.snd)
                Nothing }
                Just(v) -> return v
                Nothing -> throw("Variable \'" ++ name ++ "\' not in scope.")
            /*scopeState.find-maybe fn (elem: (string, expression)) : exn expression
                if elem.fst() == name then return elem.snd
                throw("Variable \'" ++ name ++ "\' not in scope.")*/
        fun padd(name: string, elem: expr_val) scopeState := Cons((name, elem), scopeState)
        fun pget_state() return scopeState
        fun pset_state(newState) scopeState := newState
    fun_to_exec()




fun concretely_expression_based_scope_handler(fun_to_exec: () -> <polymorphic_scope<expression>,exn|e> a2) : <exn|e> a2
 
    var scopeState := Nil
    //var test: expression := EFalse
    with handler
        fun pscope_contains(name: string) 
            val predicate = fn (elem: (string, expression)) : bool {
                if elem.fst() == name then return True
                False }
            scopeState.any ( predicate)
        fun pget(name) 
            match scopeState.find-maybe fn (elem: (string, expression)) : maybe<expression> {
                if elem.fst() == name then return Just(elem.snd)
                Nothing }
                Just(v) -> return v
                Nothing -> throw("Variable \'" ++ name ++ "\' not in scope.")
            /*scopeState.find-maybe fn (elem: (string, expression)) : exn expression
                if elem.fst() == name then return elem.snd
                throw("Variable \'" ++ name ++ "\' not in scope.")*/
        fun padd(name: string, elem: expression) scopeState := Cons((name, elem), scopeState)
        fun pget_state() return scopeState
        fun pset_state(newState) scopeState := newState
    fun_to_exec()


/*

fun polymorphic_scope_handeler<a>( fun_to_exec: () -> <polymorphic_scope<a>,exn|e> a , init_val : list<(string, a)> = Nil) : <exn|e> a
    
    var scopeState: list<(string, a)> := init_val
    //var test: expression := EFalse
    with handler
        fun pscope_contains(name: string) 
            val predicate = fn (elem: (string, a)) : bool {
                if elem.fst() == name then return True
                False }
            scopeState.any ( predicate)
        fun pget(name) 
            scopeState.helper(name)
            /*
            match scopeState.find-maybe fn (elem: (string, a)) : maybe<a> {
                if elem.fst() == name then return Just(elem.snd)
                Nothing }
                Just(v) -> return v
                Nothing -> throw("Variable \'" ++ name ++ "\' not in scope.")
                */
            
            /*scopeState.find-maybe fn (elem: (string, expression)) : exn expression
                if elem.fst() == name then return elem.snd
                throw("Variable \'" ++ name ++ "\' not in scope.")*/
        fun padd(name: string, elem: a) scopeState := Cons((name, elem), scopeState)
        fun pget_state() return scopeState
        fun pset_state(newState) scopeState := newState
    fun_to_exec()

*/

fun helper<a>(ls: list<(string, a)>, name: string): <exn> a
    match ls 
        Nil -> throw("Variable not in scope.")
        Cons(h, t) -> if h.fst == name then h.snd else t.helper(name)
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
