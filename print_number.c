#include "main.h"
#include <unistd.h>

/**
 * print_number_helper - Helper function to print number recursively
 * @n: The number to print
 *
 * Return: Number of characters printed
 */
static int print_number_helper(int n)
{
	int count;
	char digit;
	unsigned int num;

	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += print_number_helper(num / 10);

	digit = (num % 10) + '0';
	count += write(1, &digit, 1);

	return (count);
}

/**
 * print_number - Prints a number
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_number(va_list args)
{
	int n;

	n = va_arg(args, int);
	return (print_number_helper(n));
}


