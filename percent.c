#include "main.h"
/**
 *
 *
 *
*/
int _percent(va_list args)
{
	char percent = '%';
	return write(1, &percent, sizeof(char));
}
