#include "main.h"
#include <unistd.h>

/**
 * print_unsigned_number - Prints an unsigned integer.
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned_number(va_list args)
{
	unsigned int n;
	int count;
	char digit;
	va_list args_copy;

	va_copy(args_copy, args);
	n = va_arg(args, unsigned int);
	count = 0;

	if (n / 10)
	{
		va_end(args_copy);
		count += print_unsigned_number(args_copy);
	}

	digit = (n % 10) + '0';
	count += write(1, &digit, 1);

	return (count);
}
