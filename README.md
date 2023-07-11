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
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE2MjM0ODI2MjUsMjEzMDQ4MzQyNCw1MT
k0NzU1ODUsLTEzMTE2Njk3ODUsLTEyMDkzNDU1NDcsLTY0ODE2
NjI0NF19
-->