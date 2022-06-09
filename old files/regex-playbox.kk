import std/text/regex



fun main(): console ()
    val str = "t_12est_stuff123"
    // TODO regex stuff
    val rx0 = regex("^[a-z]([a-z]|\\d)*(_([a-z]|\\d)+)*", False)
    val rx2 = regex("^[a-z]+([A-Z]\\w+)*", False)
    exec(rx0, str).foreach(fn (el) {if str == el.string then el.string.println })