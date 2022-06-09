import std/os/file
import std/os/path

fun getpath () : string
    ("."/ ".bashrc").string



fun main()
    println(getpath())
