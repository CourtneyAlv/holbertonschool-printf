#include "main.h"

void _puts(char *str)
{
	int place;

	for (place = 0; *(str + place) != '\0'; place++)
	{
		_putchar(*(str + place));
	}
	_putchar('\n');
}
int _printf(const char *format, ...)
{
    _puts(*format);
    return 0;
}
