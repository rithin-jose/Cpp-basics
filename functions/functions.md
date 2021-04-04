## functions

  

A function is a named part of a program which when invoked from other parts of the program performs a specific task and may or maynot return a value.

  

Types of functions:

  

1. Built-in functions.

2. User-Defined functions.(UDF)

  

Types of user defined functions:

  

1. Function without argument and not returning a value.

2. Function without argument and returning a value.

3. Function with argument and not returning a value.

4. Function with argument and returning a value.

  
  

there is another kind of function called **inline functions** which is really efficient but makes the p[rogram really bulky so it's only suitable for samller programmes.

### Parts of a UDF/Function terminology
There three parts of a function:

 1. Function Prototype.
 
	function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body. A function prototype gives information to the compiler that the function may later be used in the program.

 2. Function Call.
 
	 In function call the function is passed the parameters needed to be evaluated. Control of the program is transferred to the user-defined function by calling it.
	 
 3. Function Definition.
 
 	Function definition contains the block of code to perform a specific task. The flow of control goes from function call to the body and returns to the next line of the call.

  

## main()

  

The main function is a built-in function where the program starts its execution and ends execution where the main() ends.

  

why main() is an in-buit function though it satisfies the conditions to be categorised as a UDF can be understood form [here](https://www.hackerearth.com/practice/notes/is-main-function-a-built-in-function-or-user-defined-function/)

  

The main function should be of int main() and not void mian() or main(). The two will work perfectly fine with the compiler as they are not illeagal but in terms of c++ ISO standards its stated that the return type must be of int type.

  

ISO C++ 3.6.1 [2]  [read here](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4296.pdf)


The main function accepts two different arguments (command line arguments).

		int argc, char *argv[]			or  	int argc, char **argv