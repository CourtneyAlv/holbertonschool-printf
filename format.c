#include "main.h"

const struct formatspec formatspecs[] = {
        {'c', _printch},
        {'s', print_string},
        {'%', _percent},
        {'d', print_int_d},
        {'i', print_int_d},
};
