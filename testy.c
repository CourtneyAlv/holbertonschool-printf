#include "main.h"
/**
 * _printf - building custom printf
 * @format: pointer contain specs of printf
 * Return: Return total count of printed characters
*/
typedef int (*print_function)(va_list);

struct formatspec
{
	char specifier;
	print_function print_func;
};
static const struct formatspec formatspecs[] =
{
	{'c', _printch},
	{'s', print_string},
	{'%', _percent}
};

int _printf(const char *format, ...)
{

	int count = 0;
	unsigned int i;
	const size_t forlength = sizeof(formatspecs) / sizeof(formatspecs[0]);

	va_list args;
	va_start(args, format);
	while (*format != '\0')
{
		if (*format == '%')
		{
			format++;
				for (i = 0; i < forlength; i++)
			{
				if (*format == formatspecs[i].specifier)
				{
					count += formatspecs[i].print_func(args);
					break;
				}
			}
		
		}else{
			char c = *format;
			write(1, &c, 1);
			count++;
		}
		format++;
	}
va_end(args);
return (count);
}
