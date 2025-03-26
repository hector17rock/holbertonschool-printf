#include "main.h"

int print_char(va_list args)
{
	write(1, va_arg(args, int *), 1);
		return (0);
}

/* Function to print a string */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	write(1, str, strlen(str));
	return (0);
}

/* Function to print the percent sign */
int print_percent(va_list args)
{
	(void)args;
	return write(1, "%", 1);
}
