#include "main.h"
typedef int (*print_function)(va_list);
struct formatspec { char specifier; print_function print_func; };
static const struct formatspec formatspecs[] = {
    {'c', _printch},
    {'s', print_string},
    {'%', _percent},
    {'d', print_int_d},
    {'i', print_int_i}
};

int _printf(const char *format, ...)
{
	unsigned int i;
	int count = 0; int found_specifier = 0;
       	const size_t forlength = sizeof(formatspecs) / sizeof(formatspecs[0]);
	va_list args;
   
       	if (format == NULL)
	       	return (-1);
	va_start(args, format);

       	while (*format) {
        if (*format == '%') {
		format++;
	   	 if (*format == '\0')
                return (-1);    
	for (i = 0; i < forlength; i++) {
               if (*format == formatspecs[i].specifier) {
		       count += formatspecs[i].print_func(args);
		       found_specifier = 1;
		       break;
                }
       	}
       	if (!found_specifier) {
		write(1, "%", sizeof(char));
		count++;
	       	write(1, format, sizeof(char));
	       	count++;
       	}
	} else {
		write(1, format, sizeof(char));
		count++;
        }
       	format++;
    }
    va_end(args);
    return count;
}