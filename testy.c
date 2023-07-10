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
	{'%', _percent},
	{'d', print_int_d},
	{'i', print_int_i},
};

int _printf(const char *format, ...)
{

	int count = 0;
	unsigned int i;
	const size_t forlength = sizeof(formatspecs) / sizeof(formatspecs[0]);

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);


	while (*format != '\0')
{
	if (*format == '%')
	{
		format++;
		if (*format == '%')
	{
		char c = '%';
		write(1, &c, sizeof(char));
		count++;
	}
		else
		{
			for (i = 0; i < forlength; i++)
			{
				if (*format == formatspecs[i].specifier)
				{
					count += formatspecs[i].print_func(args);
					break;
				}
			}
		
		if (i == forlength)
		{
			char c = '%';
			write(1, &c, sizeof(char));
			count++;

			if (*format != '\0')
			{

				c = *format;
				write(1, &c, sizeof(char));
				count++;
			}
		}
	}
}	
		else
		{	
			char c = *format;
			write(1, &c, sizeof(char));
			count++;
		}
		format++;
	}
va_end(args);
return (count);
}
