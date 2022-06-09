

effect effect1
    fun foo
    fun bar


fun effect1_handler(fun_to_exec: () -> <effect1> a): a
    with
        fun foo()
            ...
        fun bar()
            ...
    fun_to_exec()


fun main()
    with effect1_handler
    with effect2_handler
    function(v1, v2)



fun main()
    with effect1_handler
    with effect2_handler
    v1.function(v2)





fun function(variable1: type1, variable2: type2): <effect1, effect2> returntype
    pass




