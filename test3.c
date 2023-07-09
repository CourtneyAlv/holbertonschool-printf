#include "main.h"
/**
 *
 *
 *
*/
typedef int (*print_function)(va_list);

struct format_specifier {
    char specifier;
    print_function print_func;
};

static const struct format_specifier format_specifiers[] = {
    {'c', _printch},
    {'s', print_string},
    {'%', _percent}
};

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format); // Start variable arguments processing

    int count = 0; // Initialize the count of characters written

    while (*format != '\0') {
        if (*format == '%') {
            format++; // Move past the percent symbol
            for (int i = 0; i < sizeof(format_specifiers) / sizeof(format_specifiers[0]); i++) {
                if (*format == format_specifiers[i].specifier) {
                    count += format_specifiers[i].print_func(args); // Call the appropriate print function for the specifier
                    break;
                }
            }
        } else {
            char c = *format;
           write(1, &c, 1); // Write the character directly to stdout
            count++;
        }
        format++; // Move to the next character in the format string
    }

    va_end(args); // End variable arguments processing

    return count;
}

