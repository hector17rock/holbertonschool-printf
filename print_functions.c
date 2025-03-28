#include "main.h"
#include <unistd.h>

/**
 * print_char - Prints a character.
 * @args: The va_list containing the argument.
 *
 * Return: The number of characters printed (1).
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);

	return (1);
}

/**
 * print_string - Prints a string.
 * @args: The va_list containing the argument.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}

	return (count);
}


