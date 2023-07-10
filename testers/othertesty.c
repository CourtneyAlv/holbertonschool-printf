#include "main.h"
typedef int (*print_function)(va_list);
struct formatspec { char specifier; print_function print_func; };
static const struct formatspec formatspecs[] = {
    {'c', _printch},
    {'s', print_string},
    {'%', _percent},
    {'d', print_int_d},
    {'i', print_int_i}
};

int _printf(const char *format, ...)
{
    int count = 0;
    const size_t forlength = sizeof(formatspecs) / sizeof(formatspecs[0]);
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '%')
            {
                write(1, "%", sizeof(char));
                count++;
            }
            else
            {
                unsigned int i;
                for (i = 0; i < forlength; i++)
                {
                    if (*format == formatspecs[i].specifier)
                    {
                        count += formatspecs[i].print_func(args);
                        break;
                    }
                }
                if (i == forlength)
                {
                    write(1, "%", sizeof(char));
                    count++;
                    if (*format)
                    {
                        write(1, format, sizeof(char));
                        count++;
                    }
                }
            }
        }
        else
        {
            write(1, format, sizeof(char));
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

