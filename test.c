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
	return(1);
	
	for (i = 0; format[i] != '\0'; i++)	
		
	
		if (*format == '%')
	{
		_putchar('%');
		format++;

	}
			
	va_end(args);
	return (x1);

	
	/* handle the conversion specifier */

}		

