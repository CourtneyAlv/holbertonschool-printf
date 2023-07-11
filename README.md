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

#### Format Specifiers :calling:
-   `%c` - prints a single character
-   `%s` - prints a null-terminated string
-   `%d` or `%i` - prints a signed decimal integer
-   `%u` - prints an unsigned decimal integer
-   `%f` - prints a floating-point number
-   `%x` or `%X` - prints an unsigned hexadecimal integer
-   `%o` - prints an unsigned octal integer

#### Main Code Example :pencil:
```#include "main.h"  
#include "formatspecs.h"  
int  main(void) 
{ 
 int num = 42;
 char *str = "Hello, world!";
 int count = _printf("Number: %d\n
 String: %s\n", num, str); 
 return  0; 
  }
```
{
#### _printf code Example :pencil2:
```**#include** **"main.h"**

**#include** **"formatspecs.h"**

**/****

*** _printf - custom printf**

*** @format: format string**

*** Return: Result of characters printed**

***/**

**int** _printf(**const**  **char** *format, ...)

{

**unsigned**  **int** i;

**int** count = **0**, found_specifier = **0**;

**const**  **size_t** forlength = **sizeof**(formatspecs) / **sizeof**(formatspecs[**0**]);

**va_list** args;

  

**if** (format == **NULL**)

**return** (-**1**);

  

va_start(args, format);

  

**while** (*format)

{

**if** (*format == **'%'**)

{

format++;

**if** (*format == **'\0'**)

**return** (-**1**);

**for** (i = **0**; i < forlength; i++)

{

**if** (*format == formatspecs[i].specifier)

{

count += formatspecs[i].print_func(args);

found_specifier = **1**;

**break**; }

}

**if** (!found_specifier)

{

write(**1**, **"%"**, **1**);

count++;

write(**1**, format, **1**);

count++; }

} **else**

{

write(**1**, format, **1**);

count++;

}

format++;

}

va_end(args);

**return** (count);
}
```

#### Return Value
The `_printf` function returns the number of characters printed. If any error occurs, a negative value is returned.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTc2NjM1MjA1OSwyNDAwNjY2MDksMTgwMT
c4MjU1MSwxNDU3MTkyMTg5LDIxMzA0ODM0MjQsNTE5NDc1NTg1
LC0xMzExNjY5Nzg1LC0xMjA5MzQ1NTQ3LC02NDgxNjYyNDRdfQ
==
-->