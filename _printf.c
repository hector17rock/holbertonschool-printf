int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;

	/* Define function pointers array */
	format_specifier_t format_specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex},
		{'p', print_address},
		{'%', print_percent},
		{0, NULL} /* end of array */
	};

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			int j = 0;
			while (format_specifiers[j].specifier != 0)
			{
				if (format[i] == format_specifiers[j].specifier)
				{
					len += format_specifiers[j].f(args);
					break;
				}
				j++;
			}
			if (format_specifiers[j].specifier == 0)
			{
				len += write(1, "%", 1); /* Handle invalid format specifier */
				len += write(1, &format[i], 1); /* Print the next character after '%' */
			}
		}
		else
		{
			len += write(1, &format[i], 1);
		}
		i++;
	}

	va_end(args);
	return len;
}
