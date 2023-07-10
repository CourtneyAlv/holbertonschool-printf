#include "main.h"
/**
 * _percent - Handles the conversion specifier '%'
 * @args: The va_list containing the arguments
 * Return: The number of characters written
*/
int _percent(va_list args)
{
	char percent = '%';

	(void)args;

	write(1, &percent, 1);
	return (1);
}
