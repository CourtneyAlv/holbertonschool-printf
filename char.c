#include "main.h"
/**
 * _printch - Handles the specifier 'c' for characters
 * @args: The va_list containing the arguments
 * Return: The number of characters written
*/
int _printch(va_list args)
{
	int c = va_arg(args, int);

	return (write(1, &c, sizeof(char)));
}
