#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _atoi(char *s);
int _print_char(va_list args);       
int _printf(const char *format, ...);
typedef int (*print_function)(va_list);
int _print_percent(va_list args);
int print_string(va_list args);


#endif
