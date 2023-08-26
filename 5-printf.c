#include <stdio.h>
#include "main.h"
/**
 * _printf - as it says
 * @format: param
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list args;
	const char *c;
	int count = 0;

	va_start(args, format);

	for (c = format; *c != '\0'; c++)
	{
		if (*c == '%')
		{
			c++;
			if (*c == 'd')
			{
				count += print_int(args, &count);
			}
			else if (*c == 's')
			{
				count += print_string(args, &count);
			}
			else if (*c == 'c')
			{
				count += print_char(args, &count);
			}
			else if (*c == '%')
			{
				count += print_percent(args, &count);
			}
			else if (*c == 'i')
			{
				count += print_integer(args, &count);
			}
			else if (*c == 'u')
			{
				count += print_unsigned(args, &count);
			}
			else if (*c == 'o')
			{
				count += print_octal(args, &count);
			}
			else if (*c == 'x')
			{
				count += print_hexadecimal_lower(args, &count);
			}
			else if (*c == 'X')
			{
				count += print_hexadecimal_lower(args, &count);
			}
			else
			{
				_putchar(*c);
				count++;
			}
		}
		else
		{
			_putchar(*c);
			count++;
		}
	}
	va_end(args);

	return (count);
}
