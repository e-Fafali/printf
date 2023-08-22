#include <stdio.h>
#include "main.h"

/**
 * _printf - custom printf 
 * 
 * @format: param
 */

/* lets declare some external functions */
extern int print_int(va_list args);
extern int print_str(va_list args);
extern int print_octal(va_list args);
extern int print_percent(va_list args);
extern int print_char(va_list args);

/* the printf function */
int _printf(const char *format, ...)
{	
	int xters_printed = 0;                                                                            
	const char *ch;
	
	va_list args;
	va_start(args, format);

	for (ch = format; *ch != '\0'; ch++)
	{
		/* format_spec format_specifier = get_format_func(*ch);*/
		if (*ch == '%')
		{
			format_spec format_specifier = get_format_func(*ch);
			ch++;

			if (format_specifier.function)
			{
				xters_printed += format_specifier.function(args);
			}
			else
			{
				xters_printed += _putchar((unsigned char) *ch);
			}
		}
		else
		{
			xters_printed += _putchar((unsigned char) *ch);
		}
	}

	va_end(args);
	return xters_printed;
}
