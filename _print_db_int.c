#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * handle_conversion - Handles the conversion of integers
 * @value: The integer value to be converted
 * @specifier: The conversion specifier ('d' or 'i')
 *
 * Return: Nothing, just prints the formatted value.
 */

void handle_conversion(int value, char specifier)
{
	if (specifier == 'd' || specifier == 'i')
	{
		printf("%d", value); /* Print the integer value */
	}
	else
	{
		printf("Invalid specifier\n"); /* Handle invalid specifier */
	}
}

int main(void)
{
	int num = 42;

	handle_conversion(num, 'd'); /* Should print: 42 */
	printf("\n");

	handle_conversion(-42, 'i'); /* Should print: -42 */
	printf("\n");

	handle_conversion(0, 'd'); /* Should print: 0 */
	printf("\n");

	return (0);
}
