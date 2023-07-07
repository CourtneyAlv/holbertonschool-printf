#include "_Printf.h"
/**
 * _printf -
 * @format:
 * Return: Result
*/
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);


