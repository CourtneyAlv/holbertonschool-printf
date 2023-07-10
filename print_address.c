/**
 *
 *
 */


void address_to_string(void *address, char *buffer)
{
    unsigned long long int value = (unsigned long long int)address;
    int base = 16;

    int i = 0;
    while (value > 0)
    {
        int digit = value % base;
        buffer[i] = hex_digit_to_char(digit);
        value /= base;
        i++;
    }

    if (i == 0)
    {
        // Handle the special case of address being 0
        buffer[0] = '0';
        i++;
    }

    buffer[i] = '\0';
    reverse_string(buffer);
}

int print_address(va_list args)
{
	void *address = va_arg(args, void *);
	char buffer[20];
	address_to_string(address, buffer);

	int count = 0;
	for (int i = 0; buffer[i] != '\0'; i++)
	{
		char c = buffer[i];
		write (1, &c, 1);
		count++
	}

	return (count);
}
