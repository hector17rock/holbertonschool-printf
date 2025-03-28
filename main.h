#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>  /* For va_list and va_arg */
#include <unistd.h>

/* Function prototypes */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_number(va_list args);
int print_unsigned_number(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hex_helper(unsigned long n, char format);  /* NO BETTY */
int print_address(va_list args);
int handle_specifiers(const char *ptr, va_list args);

#endif /* MAIN_H */

