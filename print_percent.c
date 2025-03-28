#include "main.h"
#include <unistd.h>

/**
 * print_percent - Prints a percent sign.
 *
 * Return: The number of characters printed.
 */
int print_percent(va_list args)
{
    (void)args; /* Suppress unused parameter warning */

    /* Print the percent symbol */
    return write(1, "%", 1);
}
