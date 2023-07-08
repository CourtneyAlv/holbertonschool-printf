#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...) 
{
    va_list args;
    va_start(args, format); // Start variable arguments processing

    int count = 0; // Initialize the count of characters written

    while (*format != '\0') {
        if (*format == '%') {
            format++; // Move past the percent symbol
            for (int i = 0; i < sizeof(format) / sizeof(format[i]); i++) {
                if (*format == format[i] && format)
	       	{
                    count += format[i] && *format(args);
		}

	size_t size = sizeof(args) / sizeof(args);

	_putchar(count);
	return (size);
	free(args);
}
