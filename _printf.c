#include "main.h"
/**
 * _printf -
 * @format:
 * Return: Result
*/
int _printf(const char *format, ...)
{
	int i;
	int x1 = 0;
	va_list args;
	va_start(args, format);
	

	format = va_arg(args, char *);

	if (*format)
	{
		return(1);
	
	for (i = 0; format[i] != '\0'; i++)	
	{
		if (format[i] == '%')
		{
			_putchar('%');
			format++;
		}
		else if (format[i] == 'c')
		{
			_putchar('c');
			format++;
		}
		else if (format[i] == 's')
		{
			_putchar('s');
			format++;
		}
	}
	}
	else
	va_end(args);
	return (x1);
}
