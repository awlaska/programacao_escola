Table of Contents
1. [Syntax](#1-syntax)
2. [Output](#2-output)
3. [Comments](#3-comments)
4. [Variables](#4-variables)

# 1. Syntax
Code statements do not need to end in semicolon (;).

# 2. Output
Inserts a line after the output:
```kotlin
    println()  
```
Prints on console what's between the parenthesis:
```kotlin
    print()  
```
Prints on console the string followed by the variable's value
```kotlin
    print("string" + variable)
```

# 3. Comments
Single-line comment:
```kotlin
    // This is a single-linecomment
```
Multi-line comment:
```kotlin
    /*
    * This
    * is
    * a
    * mutli-line
    * comment
    */
```

# 4. Variables
- **var**: Changeable Variable
```kotlin
var name: String = "John"
```
Doesn't need to be specified the type of variable
```kotlin
var name = "John"
```
Doesn't need to be given a value
```kotlin
var name: String
name = "John"
```
- **val**: Unchangeable Variable
```kotlin
val name = "John"
```
## 4.1. Types
- **Int**: Whole integers
```kotlin
var age: Int = 22
```
- **Double**:
```kotlin
var age: Double = 22.99
```
- **Char**:
```kotlin
var age: Char = 'C'
```
- **Boolean**:
```kotlin
var age: Boolean = true
```
- **String**: Sequence of characters
```kotlin
var name: String = "John"
```
- **Byte**: -128 to 127
```kotlin
var name: String = "John"
```
- **Short**:
```kotlin
var name: String = "John"
```
- **Long**:
```kotlin
var name: String = "John"
```
- **Array**: Fixed Size
```kotlin
var numbers: IntArray = intArrayOf(1, 2, 3, 4, 5)
var numbers: Array<Int> = arrayOf(1, 2, 3, 4, 5)    
var numbers: Array<Any> = arrayOf(1, "two", 3.0)    //Can have any variable type
var numbers = Array(5) { index -> index * 2 }       //Fixed array with 5 values
```
- **List**: Dinamic size
```kotlin
var numbers: List<Int> = mutableListOf(1, 2, 3, 4, 5)
val firstNumber = numbers[0]
val newList = numbers + 6   //New Unchangeable List
numbers.add(6)              //Add to the current List
numbers.remove(3)           //Remove the value 3
numbers.removeAt(0)         //Remove the fisrt value
numbers.sort()              //Ascending Order
numbers.sortDescending()    //Descending Order  
```
- **Set**: Collection with unique values
```kotlin
var numbers: Set<Int> = mutableSetOf(1, 2, 3, 4, 5) 
val firstNumber = numbers[0]
val newSet = numbers + 6    //New Unchangeable Set
numbers.add(6)              //Add to the current Set
numbers.remove(3)           //Remove the value 3
numbers.removeAt(0)         //Remove the fisrt value
numbers.sort()              //Ascending Order
numbers.sortDescending()    //Descending Order  
```
- **Map**: Collection of pairs of a key and a value
```kotlin
var numbers: Map<String, Int> = mutableMapOf("one" to 1, "two" to 2)
numbers["three"] = 3        //Adds to the set
numbers.remove["two"]       //Removes the value 2
```