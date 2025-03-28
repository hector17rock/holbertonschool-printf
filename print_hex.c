#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_hex_helper - Helper function to print hexadecimal recursively.
 * @n: The number to print.
 * @format: 'x' for lowercase, 'X' for uppercase.
 *
 * Return: Number of characters printed.
 */
int print_hex_helper(unsigned long n, char format)
{
	int count = 0;
	char hex_digit;
	const char *hex_digits = (format == 'X') ?
		"0123456789ABCDEF" : "0123456789abcdef";

	if (n / 16)
		count += print_hex_helper(n / 16, format);

	hex_digit = hex_digits[n % 16];

	write(1, &hex_digit, 1);
	count++;

	return (count);
}

/**
 * print_hex - Extracts an unsigned int from va_list and prints in hex.
 * @args: The va_list containing the unsigned int
 *
 * Return: Number of characters printed.
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_hex_helper(n, 'x'));
}
