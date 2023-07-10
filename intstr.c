#include "main.h"
/**
 * int_to_str - Converts an integer to a string represent
 * @buffer: The buffer to store the resulting string
 * @num: The integer to convert
 * Return: The length of the resulting string
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
else
{
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
