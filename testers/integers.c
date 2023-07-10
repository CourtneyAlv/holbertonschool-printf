#include "main.h"
/**
 * print_int_d - Handles the conversion specifier 'd' for signed integers
 * @args: The va_list containing the arguments
 * Return: The number of characters written
*/
int print_int_d(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	char buffer[20];
	int length = int_to_str(buffer, (int)num);

	if (num == 0)
{
	write(1, "0", sizeof(char));
	length++;
}
	else
{
	write(1, buffer, length);
}

	return (length);
}
/**
 * print_int_i - Handles the conversion specifier 'i' for signed integers
 * @args: The va_list containg the arguments
 * Return:The number of characters written
*/
int print_int_i(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	char buffer[20];
	int length = int_to_str(buffer, (int)num);

	if (num == 0)
{
	write(1, "0", sizeof(char));
	length++;
}
	else
{
	write(1, buffer, length);
}
	return (length);
}

