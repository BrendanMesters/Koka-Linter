import language-constructs
import scope



effect test<a>
    fun give_val() : a

fun give_str(): string
    "wow, ik werk wel!"

fun need_b() : <console,test<string>> ()
    val value: string = give_val()
    println(value)


fun main(): console ()
    println("I ran")
    with 
        fun give_val() give_str()
    need_b()





effect code-analyzer<a>
    fun handle_Num(exp: expression) : a
    fun handle_EFalse(exp: expression) : a
    fun handle_ETrue(exp: expression) : a
    fun handle_Variable(exp: expression) : a
    fun handle_Lambda(exp: expression) : a
    fun handle_If(exp: expression) : a
    fun handle_MLpair(exp: expression) : a
    fun handle_Apply(exp: expression) : a
    fun handle_Let(exp: expression) : a
    fun handle_Letrec(exp: expression) : a
    fun handle_Equal(exp: expression) : a
    fun handle_EMult(exp: expression) : a
    fun handle_EAdd(exp: expression) : a
    fun handle_ESub(exp: expression) : a
    fun handle_Null() : a



fun effect_ran_analyzer(inp: expression): <complex_scope ,code-analyzer<a>> a
    match inp
        Num (n: int) -> handle_Num(inp)
        EFalse -> handle_EFalse(inp)
        ETrue -> handle_ETrue(inp)
        Variable    (name: string) -> effect_ran_analyzer(get(name)) //handle_Variable(inp)
        Lambda      (arg: patern, body: expression) -> handle_Lambda(inp)
        If          (cond: expression, thus: expression, otherwise: expression) -> handle_If(inp)
        MLpair      (e1: expression, e2: expression) -> handle_MLpair(inp)
        Apply       (func: expression, inp_vals: expression) -> handle_Apply(inp)
        Let         (arg: patern, arg_val: expression, body: expression) -> handle_Let(inp)
        Letrec      (arg: patern, arg_val: expression, body: expression) -> handle_Letrec(inp)
        Equals      (e1: expression, e2: expression) -> handle_Equal(inp)
        EMult        (e1: expression, e2: expression) -> handle_EMult(inp)
        EAdd         (e1: expression, e2: expression) -> handle_EAdd(inp)
        ESub         (e1: expression, e2: expression) -> handle_ESub(inp)
        Null -> handle_Null()
            