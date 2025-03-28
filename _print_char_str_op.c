#include <unistd.h>
#include <stdarg.h>

/**
 * _print_char - Prints a single character.
 * @c: The character to print.
 *
 * Return: 1 on success.
 */
int _print_char(char c)
{
	write(1, &c, 1); /* Print the character */
	return (1);
}

/**
 * _print_str - Prints a string.
 * @s: The string to print.
 *
 * Return: The number of characters printed.
 */
int _print_str(char *s)
{
	int count = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6); /* Handle null string */
		return (6); /* Return length of "(null)" */
	}

	while (*s)
	{
		write(1, s, 1); /* Print each character in the string */
		s++;
		count++;
	}

	return (count);
}

