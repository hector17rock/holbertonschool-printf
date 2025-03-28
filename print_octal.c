#include "main.h"
#include <unistd.h>

/**
 * print_octal_helper - Helper function to print octal number recursively
 * @n: The number to print in octal
 *
 * Return: Number of characters printed
 */
static int print_octal_helper(unsigned int n)
{
    int count;
    char digit;

    count = 0;
    if (n / 8)
        count += print_octal_helper(n / 8);

    digit = (n % 8) + '0';
    count += write(1, &digit, 1);

    return (count);
}

/**
 * print_octal - Prints an unsigned integer in octal format
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
    unsigned int n;

    n = va_arg(args, unsigned int);
    return (print_octal_helper(n));
}
