
## Array

Array is a collection of variables of same data type referenced under the same name. they are stored in a contiguous memory locations and can be accessed randomly using indecesof the array.

Eg.
int a[4].   here 4 is the length of the array.

| 10 | 20 | 56 | 23 |
|--- |---|---|---|


 in this example 
 **First index:** 0
 **last index:** 3
 **Array length:** 4

## Need of array 
We can use normal variables (v1, v2, v3, ..) when we have a small number of objects, but if we want to store a large number of instances, it becomes difficult to manage them with normal variables. The idea of an array is to represent many instances in one variable.


**Advantages of an Array in C++:**

1.  Random access of elements using array index.
2.  Use of less line of code as it creates a single array of multiple elements.
3.  Easy access to all the elements.
4.  Traversal through the array becomes easy using a single loop.
5.  Sorting becomes easy as it can be accomplished by writing less line of code.

**Disadvantages of an Array in C++:**

1.  Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list.
2.  Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.