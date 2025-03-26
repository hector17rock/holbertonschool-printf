#include "main.h"

/**
 * _printf - Costume print function
 * @format: Format string with specifiers
 * Return:Number of character printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_star(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c': count += print_char(args); break;
				case 's': count += print_string(args); break;
				case 'd': case 'i': count += print_int(args); break;
				case 'b': count += print_binary(args); break;
				case 'u': count += print_unsigned(args); break;
				case 'o': count += print_octal(args); break;
				case 'x': count += print_hex(args, 0); break;
				case 'X': count += print_hex(args, 1); break;
				case 'S': count += print_S(args); break;
				case 'p': count += print_pointer(args); break;
				case '%': count += print_percent(args); break;
				default: /* Unknown specifier */
						  _putchar('%');
						  _putchar(*(format);
								  count += 2;
								  break;
								  }
								  }
								  else
								  {
								  _putchar(*format);
								  count++;
								  }
								  format++;
								  }
								  va_end(args);
								  return (count);
								  }
