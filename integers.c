#include "main.h"
/**
 *
 *
 *
*/
int print_int_d(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	char buffer[20];
	int length = int_to_str(buffer, (int)num);
	
	if (num == 0)
{
	write(1, "0", 1);
	length++;
}
	else
{
	write(1, buffer, length);
}

	return (length);
}
/**
 *
 *
 *
*/
int print_int_i(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	
	char buffer[20];
	int length = int_to_str(buffer, (int)num);
	
	if (num == 0)
{
	write(1, "0", 1);
	length++;
}
	else
{
	write(1, buffer, length);
}
	return (length);
}

