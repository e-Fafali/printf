#include <stdio.h>
#include "main.h"

/**
 * print_char - as it says
 *
 * @args: param
 *
 * Return: 1 for success
 */
int print_char(va_list args)
{
	va_list args_cpy;

	char ch = va_arg(args_cpy, int);

    va_copy(args_cpy, args);

	_putchar(ch);

	va_end(args_cpy);
	return (1);
}
