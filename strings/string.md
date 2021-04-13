## Character Array

Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

Eg:

	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

or

	char greeting[] = "Hello";

  
  ## std::string
C++ has in its definition a way to represent sequence of characters as an object of class. This class is called std:: string. String class stores the characters as a sequence of bytes with a functionality of allowing access to single byte character.

## std:: string vs Character Array
-   A character array is simply an  **array of characters**  can terminated by a null character. A string is a  **class which defines objects**  that be represented as stream of characters.

-   Size of the character array has to  **allocated statically**, more memory cannot be allocated at run time if required. Unused allocated  **memory is wasted**  in case of character array. In case of strings, memory is  **allocated dynamically**. More memory can be allocated at run time on demand. As no memory is preallocated, **no memory is wasted**.

-   There is a **threat of array decay** in case of character array. As strings are represented as objects,  **no array decay**  occurs.

  
  

-   Implementation of **character array is faster**  than std:: string.  **Strings are slower**  when compared to implementation than character array.

-   Character array  **do not offer**  much  **inbuilt functions** to manipulate strings. String class defines **a number of functionalities**  which allow manifold operations on strings.

## Array Decay
The loss of type and dimensions of an array is known as decay of an array.This generally occurs when we pass the array into function by value or pointer. What it does is, it sends first address to the array which is a pointer, hence the size of array is not the original one, but the one occupied by the pointer in the memory.
