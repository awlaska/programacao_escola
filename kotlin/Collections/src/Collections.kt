//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun collections(args: Array<String>) {
    /* LIST
    * allows multiplicates
    */

    // Immutable list
    val namesL1 = listOf<String>("Name 1", "Name 2", "Name 3")

    println("Immutable List:")
    println(namesL1[0])

    print("\n")

    // Mutable list - type is inferred
    val namesL2 = mutableListOf("Name 1", "Name 2", "Name 3")

    namesL2.add("Name 4")
    namesL2.removeAt(0)
    namesL2.remove("Name 2")

    println("Mutable List:")
    namesL2.forEach{println(it)}

    /* SET
     */

    // Immutable set
    val namesS1 = setOf<String>("Name 1", "Name 2", "Name 3")

    println("Immutable Set:")
    namesS1.forEach{ println(it) }

    // Mutable set
    val namesS2 = mutableSetOf<String>("Name 1", "Name 2", "Name 3")
    namesS2.add("Name 4")

    println("Mutable Set:")
    namesS2.forEach{ println(it) }

    /* MAP
     */

    val users = mapOf<Int, String>()
}