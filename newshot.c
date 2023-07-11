#include "main.h"
#include "formatspecs.h"
/**
 * _printf - build a custom printf function
 * @format: contains info
 * Return: Result
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int count = 0, found_specifier = 0;
	const size_t forlength = sizeof(formatspecs) / sizeof(formatspecs[0]);
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
					break; }
			}
			if (!found_specifier)
			{
				write(1, "%", 1);
				count++;
				write(1, format, 1);
				count++; }
		} else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
