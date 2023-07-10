#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


int _printf(const char *format, ...);
int _putchar(char c);
int _atoi(char *s);
int _printch(va_list args);       
int _printf(const char *format, ...);
int _percent(va_list args);
int int_to_str(char *buffer, int num);
int print_int_helper(int num);
int print_int_d(va_list args);
int print_int_i(va_list args);
int print_string(va_list args);

#endif
