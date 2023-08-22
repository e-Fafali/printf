#include <stdio.h>
#include "main.h"


/* lets declare some external functions */
extern int print_int(va_list args);
extern int print_str(va_list args);
extern int print_octal(va_list args);
extern int print_percent(va_list args);
extern int print_char(va_list args);

/**
 * _printf - custom printf
 *
 * @format: param
 *
 * Return: xters pited
 */

int _printf(const char *format, ...)
{
	int xters_printed = 0;
	const char *ch;
	format_spec format_specifier;

	va_list args;

	va_start(args, format);

	for (ch = format; *ch != '\0'; ch++)
	{
		if (*ch == '%' && (*(ch + 1)) == '\0')
			return (-1);

		if (*ch == '%' && (*(ch + 1)) != '\0')
		{
			format_specifier = get_format_func(*ch);
			ch++;

			if (format_specifier.function)
			{
				va_list args_cpy;
				va_copy(args_cpy, args);
				xters_printed += format_specifier.function(args_cpy);
				va_end(args_cpy);
			}
			else
			{
				_putchar(*ch);
				xters_printed++;
			}
		}
		else
		{
				_putchar(*ch);
				xters_printed++;
		}
	}

	va_end(args);
	return (xters_printed);
}
