#indef MIAN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Main function */
int _printf(const char *format, ...);

/* Function for specifiers */
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args, int uppercase);
int print_s(va_list args);
int print_pointer(va_list args);
int print_percent(va_list args);

/* Utility Functions */
int _putchar(char c);
int _puts(cha *str);
int _strlen(char *s);
int print_number(int n);
int print_unsigned_number(unsigned int n);

#endif
