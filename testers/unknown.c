#include "main.h"
/**
 *
 *
*/
int _unknownr(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	
	if (str != NULL)
{
	while (*str)
{
	write (1, str, 1);
	count++;
	str++;
}
	return (count);
}
