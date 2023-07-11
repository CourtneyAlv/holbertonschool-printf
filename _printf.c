#include "main.h"
/**
 * _printf - Custom printf
 * @format: format string
 * Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	unsigned int i;
	int count = 0;
	int found_specifier = 0;
	size_t forlength = sizeof(formatspecs) / sizeof(formatspecs[0]);
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
		format++;
		if (*format == '\0')
			return (-1);
	for (i = 0; i < forlength; i++)
	{
		if (*format == formatspecs[i].specifier)
		{
		count += formatspecs[i].print_func(args);
		found_specifier = 1;
		break;
		}
	}
		if (!found_specifier)
		{
		write(1, "%", sizeof(char));
		count++;
		write(1, format, sizeof(char));
		count++;
		}
	} else
	{
		write(1, format, sizeof(char));
		count++;
	}
	format++;
	}
	va_end(args);
	return (count);
}
