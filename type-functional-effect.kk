
import language-constructs
import scope
import error-warning-handler

effect handle_expression<a>
    fun handle_Num(n: int): a
    fun handle_EFalse(): a
    fun handle_ETrue(): a
    fun handle_Variable(name: string): a
    fun handle_Lambda(arg: patern, body: expression): a
    fun handle_If(cond: expression, thus: expression, otherwise: expression): a
    fun handle_MLpair(e1: a, e2: a): a
    // Handle apply may have a name argument, this is only provided
    // if the function was aquired with a variable and will be the
    // variable name.
    fun handle_Lambda_Apply(arg: patern, arg_vals: expression, body: expression): a
    fun handle_Variable_Apply(var_name: string, arg_vals: expression): a
    fun handle_Let(arg: patern, arg_val: expression, body: expression): a
    fun handle_Letrec(arg: patern, arg_val: expression, body: expression): a
    fun handle_Equals(e1: expression, e2: expression): a
    fun handle_EMult(e1: expression, e2: expression): a
    fun handle_EAdd(e1: expression, e2: expression): a
    fun handle_ESub(e1: expression, e2: expression): a
    fun get_Null_val(): a




fun interpreter_handler(fun_to_exec: () -> <polymorphic_scope<a>, handle_expression<a>|e> a): <polymorphic_scope<expression> |e> a


    with
        fun handle_Num(n) Num(n) 
        fun handle_EFalse() EFalse
        fun handle_ETrue() ETrue
        fun handle_Variable(name) EFalse
        fun handle_Lambda(arg, body) EFalse
        fun handle_If(cond, thus, otherwise) EFalse
        fun handle_MLpair(e1, e2) EFalse
        // Handle apply may have a name argument, this is only provided
        // if the function was aquired with a variable and will be the
        // variable name.
        fun handle_Lambda_Apply(arg, arg_vals, body) EFalse
        fun handle_Variable_Apply(var_name, arg_vals) EFalse
        fun handle_Let(arg, arg_val, body) EFalse
        fun handle_Letrec(arg, arg_val, body) EFalse
        fun handle_Equals(e1, e2) EFalse
        fun handle_EMult(name) EFalse
        fun handle_EAdd(name) EFalse
        fun handle_ESub(name) EFalse
        fun get_Null_val(name) EFalse
    fun_to_exec














