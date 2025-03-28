#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - A simple implementation of printf function.
 * @format: The format string that contains the directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			if (*(ptr + 1) == '\0')
				return (-1);

			if (*(ptr + 1) == 'c' || *(ptr + 1) == 's' ||
				*(ptr + 1) == '%' || *(ptr + 1) == 'd' ||
				*(ptr + 1) == 'i' || *(ptr + 1) == 'u' ||
				*(ptr + 1) == 'o' || *(ptr + 1) == 'x' ||
				*(ptr + 1) == 'X' || *(ptr + 1) == 'p')
			{
				count += handle_specifiers(ptr + 1, args);
				ptr++; /* Skip over the specifier */
			}
			else
			{
				write(1, ptr, 1);
				count++;
			}
		}
		else
		{
			write(1, ptr, 1);
			count++;
		}
	}

	va_end(args);
	return (count);
}

/**
 * handle_specifiers - Handles the format specifiers.
 * @spec: The format specifier.
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int handle_specifiers(const char *spec, va_list args)
{
	int count = 0;

	if (*spec == '%')
	{
		count += print_percent();
	}
	else if (*spec == 'c')
	{
		count += print_char(args);
	}
	else if (*spec == 's')
	{
		count += print_string(args);
	}
	else if (*spec == 'd' || *spec == 'i')
	{
		count += print_number(args);
	}
	else if (*spec == 'u')
	{
		count += print_unsigned_number(args);
	}
	else if (*spec == 'o')
	{
		count += print_octal(args);
	}
	else if (*spec == 'x' || *spec == 'X')
	{
		count += print_hex(args);
	}
	else if (*spec == 'p')
	{
		count += print_address(args);
	}
	return (count);
}

