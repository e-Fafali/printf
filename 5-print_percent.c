#include <stdio.h>
#include "main.h"

/**
 * print_percent - as it says
 *
 * @args: param
 *
 * Return: 1 for success
 */
int print_percent(__attribute__((unused)) va_list args)
{
	va_list args_cpy;
	va_copy(args_cpy, args);

	_putchar('%');

	va_end(args_cpy);
	return (1);
}
