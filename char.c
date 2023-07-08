#include "main.h"
/**
 *
 *
 *
*/
int print_char(va_list args)
{
	int c = va_arg(args, int);
	return write(1, &c, sizeof(char));
}
