#include "main.h"
/**
 *
 *
 *
*/
int _printch(va_list args)
{
	int c = va_arg(args, int);
	return write(1, &c, sizeof(char));
}
