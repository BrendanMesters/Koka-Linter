import language-constructs
import type-functional-effect
import error-warning-handler
import scope



fun main()
    ()

fun analyzer (inp: expression) : <div, exn, errors-and-warnings, polymorphic_scope<expression>, handle_expression<a>, console|e> a
    match inp
        Num(n) -> handle_Num(n)
        EFalse -> handle_EFalse()
        ETrue -> handle_ETrue()
        Variable(name) -> handle_Variable(name)
        Lambda(arg, body) -> handle_Lambda(arg, body)
        If(c, t, e) -> handle_If(c, t, e)
        MLpair(e1, e2) -> handle_MLpair(e1.analyzer, e2.analyzer)
        Apply(func, arg_vals) ->
            match func
                Lambda(arg, body) ->
                    handle_Lambda_Apply(arg, arg_vals, body)
                Variable(name) ->
                    handle_Variable_Apply(name, arg_vals)
                el ->
                    add_error("Function application's first argument was not of type `lambda` but of type {" ++ el.show ++ "}")
                    get_Null_val()
        Let (arg, arg_val, body) ->
            val old_scope = pget_state()
            val retval = handle_Let(arg, arg_val, body)
            pset_state(old_scope)
            retval
        Letrec (arg, arg_val, body) ->
            val old_scope = pget_state()
            val retval = handle_Letrec(arg, arg_val, body)
            pset_state(old_scope)
            retval
        Equals(e1, e2) -> handle_Equals(e1, e2)
        EMult(e1, e2) -> handle_EMult(e1, e2)
        EAdd(e1, e2) -> handle_EAdd(e1, e2)
        ESub(e1, e2) -> handle_ESub(e1, e2)
        Null -> get_Null_val()


