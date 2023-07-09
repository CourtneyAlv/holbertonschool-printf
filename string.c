#include "main.h"
/**
 *
 *
 *
*/
int print_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	if (str == NULL)
	{
		return write(1, "(null)", 6);
	}
	else 
	{
		size_t len = 0;
	
		while (str[len] != '\0')
	{
		len++;
	}
	return write(1, str, len);
	}
}
