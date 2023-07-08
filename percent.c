#include "main.h"
/**
 *
 *
 *
*/
int print_percent(va_list args)
{
	char percent = '%';
	return write(1, &percent, sizeof(char));
}
