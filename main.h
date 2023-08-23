#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/* _putchar to print characters to standard output */
int _putchar(char c);

/*  */
void _puts(char *str);

/* Format specifier function */
int _printf(const char *format, ...);

/* function pointer for the format specifier */
typedef int (*FormatFunction)(va_list args);

extern int print_int(va_list args);
extern int print_str(va_list args);
extern int print_octal(va_list args);
extern int print_percent(va_list args);
extern int print_char(va_list args);

#endif
