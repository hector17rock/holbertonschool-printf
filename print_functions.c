#include "main.h"

int print_char(va_list args)
{
	return write(1, va_arg(args, int *), 1);
}

/* Function to print a string */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	write(1, str, strlen(str));
	return (0);
}

/* Function to print an integer */
int print_int(va_list args);
{
	return (0);
}

/* Function to print an unsigned integer */
int print_unsigned(va_list args);
{
	return (0);
}

/* Function to print in octal */
int print_octal(va_list args);
{
	return (0);
}

/* Function to print hexadecimal */
int print_hex(va_list args);
{
	return (0);
}

/* Function to print a pointer address */
int print_address(va_list args);
{
	return (0);
}

/* Function to print the percent sign */
int print_percent(va_list args);
{
	(void)args;
	return write(1, "%", 1);
}
