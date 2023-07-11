#include "main.h"
/**
 * print_int_d - function to print decimal integer
 * @args: va_list containing the int argument
 * Return: Number of characters to be printed
*/
int print_int_d(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		write(1, "-", sizeof(char));
		count++;
		num = -num;
	}
	if (num == 0)
	{
		write(1, "0", sizeof(char));
		count++;
	}
	else
	{
	count += print_int_helper(num);
	}
	return (count);
}
/**
 * print_int_i - function to print an integer
 * @args: va_list containing int argument
 * Return: Number of characters to be printed
*/
int print_int_i(va_list args)
{
	int num = va_arg(args, int);

	return (print_int_helper(num));
}
