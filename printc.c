#include "main.h"
/**
 * _print_char -
 * @args
 * Return:
*/
int _print_char(va_list args)
{
	int c = va_args(args, int);
	putchar(c);
	return (1);
}
