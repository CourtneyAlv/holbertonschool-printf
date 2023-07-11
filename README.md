# README.md:notebook:
## *_printf.c project*:memo:

### Description: :book:
The code in `main.c` implements a custom `printf` function, `_printf`, which replicates the behavior of the standard `printf` function in C. It allows you to print formatted output to the console.

### Usage: :computer:
 To use the `_printf` function, you have to include the header files: `main.h` and `formatspecs.h`. The `main.h` header file contains function prototypes and necessary definitions. The `formatspecs.h` likely contains the definitions of format specifiers and their printing functions.

#### Introduction: :dart:
Our `_printf` function provides an easy way to format and print the output in C. It supports format specifiers that allow you to print different types of data with customized formatting.

#### Format example
 **code**
`int _printf(const  char *format, ...);`

#### Format Specifiers

-   `%c` - prints a single character
-   `%s` - prints a null-terminated string
-   `%d` or `%i` - prints a signed decimal integer
-   `%u` - prints an unsigned decimal integer
-   `%f` - prints a floating-point number
-   `%x` or `%X` - prints an unsigned hexadecimal integer
-   `%o` - prints an unsigned octal integer

#### Code Example
``#include "main.h"  
#include "formatspecs.h"  
int  main(void) 
{ int num = 42; char *str = "Hello, world!"; int count = _printf("Number: %d\nString: %s\n", num, str); return  0; }``
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE0OTkyMjI3MTcsMTgwMTc4MjU1MSwxND
U3MTkyMTg5LDIxMzA0ODM0MjQsNTE5NDc1NTg1LC0xMzExNjY5
Nzg1LC0xMjA5MzQ1NTQ3LC02NDgxNjYyNDRdfQ==
-->