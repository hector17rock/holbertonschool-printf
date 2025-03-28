#include "main.h"
#include <unistd.h>

/**
 * print_address - Prints the address of a pointer in hexadecimal format.
 * @args: The va_list containing the address to print.
 *
 * Return: The number of characters printed.
 */
int print_address(va_list args)
{
	void *ptr;
	unsigned long address;
	int count;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		return (write(1, "(nil)", 5));
	}

	count = 0;
	address = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += print_hex_helper(address, 'x');

	return (count);
}
