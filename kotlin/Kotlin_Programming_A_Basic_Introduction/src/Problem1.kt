/*
* Pet Grooming Zone (PGZ) is a pet grooming business located in Shah town.
* On a Thursday, 164 legs walked into Pet Grooming Zone.
* On this Thursday, find out:
* a) How many dogs were groomed that day?
* b) If each groomer saw and average of 4 dogs, how many groomers are employed by PGZ?
* c) How many nails did each groomer clip on this day?
* d) How much money was made that day?
*
* val legs:Int = 4 // Immediate assignment
* val nails = 18 // Int type is infered
* val pricingPerNail:Float = 0.75 // Float type is defined
* var message:String ..// No initialization, then type must be declared No initialization, then type must be declared
*/

fun main() {
    val legs_total:Int = 176
    val legs:Int = 4
    val nails = 18
    val pricingPerNail:Float = 0.75F
    var message:String

    // a)
    var dogs = legs_total / legs
    println("$dogs dogs were groomed.")

    // b)
    var groomers = dogs / 4
    println("$groomers groomers are employed at PGZ.")

    // c)
    var nails_per_groomer = groomers * nails
    println("$nails_per_groomer nails per groomer.")

    // d)
    var money = legs_total * nails * pricingPerNail
    println("$money was made that day.")
}