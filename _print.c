#include "main.h"
/**
 * _printf -
 * @format:
 * Return: Result
*/
int _printf(const char *format, ...)
{
	int i;
	va_list args;
	va_start(args, format);
	

	format = va_arg(args, int);

	if (*format)
	return(-1);
	
	for (i = 0; i < format && format[i] != '\0'; i++)	

{
	va_end(args);
	return (args);
}
	
	/* handle the conversion specifier */

}		

