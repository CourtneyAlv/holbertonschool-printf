#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - entry
 * @s: input
 * Return: result
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int num = 0;
	char *str = s;

	while (*str != '\0' && (*str < '0' || *str > '9'))
	{
		if (*str == '-')
		{
			x *= -1;
		}
		str++;
	}
	if (*str != '\0')
	{
		while (*str >= '0' && *str <= '9')
		{
			num = num * 10 + (*str - '0');
			str++;
		}
	}
	return (num * x);
}
