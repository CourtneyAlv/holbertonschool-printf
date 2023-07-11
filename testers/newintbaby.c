#include "main.h"
int print_int_helper(int num)
{
	char digit = '0' + abs(num % 10);
	int count = 0;
	
	if (num == 0)
       	{
		write(1, "0", sizeof(char));
		return 1;
	}
	if (num / 10 != 0) 
	{
		count += print_int_helper(num / 10);
	}
	write(1, &digit, sizeof(char));
	return (count + 1);
}

int print_int_d(va_list args)
{	
	int num = va_arg(args, int);
        int count = 0;
	
	if (num < 0)
       	{
        	write(1, "-", sizeof(char));
        	num = -num;
        	count++;
	}
       	count += print_int_helper(num);
	return (count);
}
int print_int_i(va_list args)
{
	int num = va_arg(args, int);
	return (print_int_helper(num));
}
