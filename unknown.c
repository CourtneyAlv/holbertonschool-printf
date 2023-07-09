#include "main.h"
/**
 *
 *
*/
int_unknownr(va_list args)
{
	char *str = va_args(args, char *);
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
