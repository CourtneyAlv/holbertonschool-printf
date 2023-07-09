#include "main.h"
/**
 *
 *
 *
*/
int print_int_d(va_list args)
{
	int num = va_arg(args, int);

	char buffer[20];
	int length = int_to_str(buffer, num);
	write(1, buffer, length);

	return (length);
}
/**
 *
 *
 *
*/
int print_int_i(va_list args)
{
	int num = va_arg(args, int);

	char buffer[20];
	int length = int_to_str(buffer, num);
	write(1, buffer, length);

	return (length);
}

