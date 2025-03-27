#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing the directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr = format;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == '%')
		{
			count += handle_specifiers(args, ptr);
			ptr += 2; /* Skip the format specifier */
		}
		else
		{
			write(1, ptr, 1);
			count++;
			ptr++;
		}
	}

	va_end(args);
	return (count);
}

/**
 * handle_specifiers - Handle the format specifiers.
 * @args: The argument list.
 * @ptr: The pointer to the current format specifier.
 *
 * Return: The number of characters printed for the specifier.
 */
int handle_specifiers(va_list args, const char *ptr)
{
	int count = 0;

	if (*(ptr + 1) == 'c')
	{
		count += print_char(args);
	}
	else if (*(ptr + 1) == 's')
	{
		count += print_string(args);
	}
	else if (*(ptr + 1) == '%')
	{
		write(1, "%", 1);
		count++;
	}
	else
	{
		write(1, ptr, 1);  /* Handle unsupported specifiers */
		count += 2;
	}

	return (count);
}

/**
 * print_char - Prints a single character.
 * @args: The variable argument list containing the character.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Prints a string.
 * @args: The variable argument list containing the string.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str)
	{
		count = print_string_helper(str);
	}
	else
	{
		write(1, "(null)", 6);
		count += 6;
	}

	return (count);
}

/**
 * print_string_helper - Helper function to print a string.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_string_helper(char *str)
{
	int count = 0;

	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}

