
//          -⋄= This allows for recursively defined functions but has wrong scoping =⋄-

add_patterns_and_expressions(arg, arg_val).foreach(fn ((name, value)) { padd(name, value.test_interpreter)})

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



//         -⋄= This has correct scoping but doesn't allow for recursively defined functions =⋄-

fun args_and_vals(pat: patern, vals: expression, converter: (expression) -> <polymorphic_scope<a>|e> a, use_closure: bool = False) : <polymorphic_scope<a>|e> ()
    match (pat, vals)
        (Ident(name), _) -> 
            if use_closure
            then
                val scp = pget_state()
                padd_with_closure(name, vals, scp)
            else
                padd(name, vals.converter)
        (NullPat, _) -> ()
        (Patpair(p1, p2), MLpair(e1, e2)) -> 
            args_and_vals(p1, e1, converter)
            args_and_vals(p2, e2, converter)
        _  -> ()

