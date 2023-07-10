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
	int dig = 1;

        if (num < 0)
{
	neg = 1;
        num = -num;
	length++;
}
        while (dig * 10 <= num)
{
        dig *= 10;
}
	if (neg)
{
	buffer[0] = '-';
	length++;
	buffer++;
}
	if (num == 0)
{
	buffer[0] = '0';
	length++;
} 
else {
	while (dig > 0)
	{
		int digit = num / dig;
		buffer[0] = '0' + digit;
		buffer++;
		length++;
		num %= dig;
		dig /= 10;
	}
}
	buffer[0] = '\0';

       return (length);
}
