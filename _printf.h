#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>

int _printf(const char *format, ...);
int handle_specifiers(const char *spec, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_unsigned_number(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, char format);
int print_address(void *addr);

#endif

