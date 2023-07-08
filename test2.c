#include "main.h"
/**
 *
 *
 *
*/
typedef int (*print_function)(va_list);

struct format_specifier
{
	char specifier;
	print_function print_func;
};
static const struct format_specifier format_specifiers[] =
{
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent}
};
int _printf(cont char *format, ...)
{
	va_list args;
	va_start(args, format);

	int count = 0, i;

	while (*format != '\0') 
{
	if (*format == '%')
{
	format++;
	for (i = 0; i < sizeof(format_specifiers) / sizeof(format_specifiers[0]; i++)
{
	if (*format == format_specifiers[i].specifiers)
{	count += format_specifiers[i].print_func(args);
	break;
}
}
}
	else 
{
	putchar(*format);
	count++;
}
format++;
}
	va_end(args);
	return(count);
}
