#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_percent - Prints a percent symbol.
 *
 * This function writes a percent symbol using the write() function.
 *
 * Return: Always returns 1 (for the one character printed).
 */
int print_percent(void)
{
	write(1, "%", 1); /* NO BETTY */
	return (1); /* Return 1 for one character printed */
}


