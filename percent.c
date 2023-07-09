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
/**
 *
 *
 *
*/
int int_to_str(char *buffer, int num)
{
        int length = 0;
        int neg = 0;

        if (num < 0)
{
        neg = 1;
        num = -num;
        length++;
}
        int dig = 1;
        while (dig * 10 <= num)
{
        dig *= 10;
}
        while (dig > 0)
{
        int digit = num / dig;
        buffer[length++] = '0' + digit;
        num %= dig;
        dig /= 10;
}
        if (neg)
{
        buffer[length++] = '-';
}
        return (length);
}
