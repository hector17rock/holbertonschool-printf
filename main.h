#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_address(va_list args);
int print_percent(va_list args);

/**
 * struct format_specifier - structure for a format specifier and function
 * @specifier: the format specifier
 * @f: the function that handles the specifier
 */
typedef struct format_specifier
{
  char specifier;
  int (*f)(va_list args);
} format_specifier_t;
#endif
