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
typedef int (*format_function)(va_list args);

typedef struct {
	char spec;
	format_function function;
} format_spec;

/* the collector */
format_spec get_format_func(char spec);

int print_int();
int print_str();
int print_octal();
int print_percent();
int print_char();
#endif
