#include "main.h"
/**
 * print_int_helper - function to print an integer
 * @num: integer to print
 * Return: Number of characters printed
*/
int print_int_helper(int num)
{
	char digit = '0' + abs(num % 10);
	int count = 0;

	if (num == 0)
	{
		write(1, "0", sizeof(char));
		return (1);
	}
	if (num / 10 != 0)
	{
		count += print_int_helper(num / 10);
	}
	write(1, &digit, sizeof(char));
	return (count + 1);
}
