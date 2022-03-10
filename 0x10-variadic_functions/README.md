Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.

Syntax:

int function_name(data_type variable_name, ...);
Values of the passed arguments can be accessed through the header file named as:

#include <stdarg.h>
<stdarg.h> includes the following methods:

Methods

Description

va_start(va_list ap, argN)	This enables access to variadic function arguments.
va_arg(va_list ap, type)	This one accesses the next variadic function argument.
va_copy(va_list dest, va_list src)	This makes a copy of the variadic function arguments.
va_end(va_list ap)	This ends the traversal of the variadic function arguments.
Here, va_list holds the information needed by va_start, va_arg, va_end, and va_copy.

Program 1:

The following simple C program will demonstrate the working of the variadic function AddNumbers():

C
// C program for the above approach
 
#include <stdarg.h>
#include <stdio.h>
 
// Variadic function to add numbers
int AddNumbers(int n, ...)
{
    int Sum = 0;
 
    // Declaring pointer to the
    // argument list
    va_list ptr;
 
    // Initializing argument to the
    // list pointer
    va_start(ptr, n);
 
    for (int i = 0; i < n; i++)
 
        // Accessing current variable
        // and pointing to next one
        Sum += va_arg(ptr, int);
 
    // Ending argument list traversal
    va_end(ptr);
 
    return Sum;
}
 
// Driver Code
int main()
{
    printf("\n\n Variadic functions: \n");
 
    // Variable number of arguments
    printf("\n 1 + 2 = %d ",
           AddNumbers(2, 1, 2));
 
    printf("\n 3 + 4 + 5 = %d ",
           AddNumbers(3, 3, 4, 5));
 
    printf("\n 6 + 7 + 8 + 9 = %d ",
           AddNumbers(4, 6, 7, 8, 9));
 
    printf("\n");
 
    return 0;
}
