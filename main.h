#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/* _putchar to print characters to standard output */
int _putchar(char c);

/*  */
void _puts(char *str);

/* Format specifier function */
int _printf(const char *format, ...);

/* declare function that handles %d for integers */
int print_int(va_list args, int *count);

/* declare function that handles %s for strings */
int print_string(va_list args, int *count);

/* declare function that handles %% for percent */
int print_percent(va_list args, int *count);

/* declare function that handles %c for char */
int print_char(va_list args, int *count);

/* declare function that handles %i for integer */
int print_integer(va_list args, int *count);

/* Declare the function that handles %u for unsigned integers */
int print_unsigned(va_list args, int *count);

/* Declare the function that handles %o for octal integers */
int print_octal(va_list args, int *count);

/* Declare the function that handles %x for lowercase hexadecimal integers */
int print_hexadecimal_lower(va_list args, int *count);

/* Declare the function that handles %X for uppercase hexadecimal integers */
int print_hexadecimal_upper(va_list args, int *count);


#endif
