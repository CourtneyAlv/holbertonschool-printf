#include "main.h"
/**
 *
 *
 *
*/
int _percent(va_list args)
{
	char percent = '%';
	(void)args;

	return write(1, &percent, sizeof(char));
}
