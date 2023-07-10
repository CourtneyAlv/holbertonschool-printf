#include "main.h"
/**
 * print_string - Handles the conversion specifiers 's' for strings
 * @args: The va_list containing the arguments
 * Return: The numbers of characters written
*/
int print_string(va_list args)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	else
	{
		size_t len = 0;

		while (str[len] != '\0')
	{
		len++;
	}
	return (write(1, str, len));
	}
}
