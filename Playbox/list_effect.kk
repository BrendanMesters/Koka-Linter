effect scope
    fun get(name: string) : maybe<int>
    fun add(name: string, item: int) : ()


fun test(n: int): <div, scope, console> ()
    match get("")
        Just(x) -> println(x)
        _ -> ()
    if n > 0
    then
        with
            fun get(name) get(name)
            fun add(name, item) add(name, item)
        test(n - 1)

fun main()
    var state : list<(string, int)> := Nil 
    var tmp : list<(string, int)> := Nil 
    with 
        fun get(name)
            match state.head
                Nothing -> Nothing
                Just(x) -> 
                    if x.fst == name then return Just(x.snd)
                    tmp := state
                    match state.tail 
                        Nil -> Nothing
                        Cons(_, t) ->
                            state := t
                            val retval = get(name)
                            state := tmp
                            retval
        fun add(name, item) state := Cons((name, item), state)
    test(12)
