#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_octal - as it says
 *
 * @args: param
 *
 * Return: 1 for success
 */
int print_octal(va_list args)
{
	va_list args_cpy;

	unsigned int num = va_arg(args_cpy, unsigned int);
	char oct_str[32]; /* octal */
	
	/* lets reverse it */
	int xters_printed = 0;
	int i;

	/* Let's do some conversion */
	int index = 0;

	va_copy(args_cpy, args);

	while (num > 0)
	{
		int digit = num % 8;

		oct_str[index] = '0' + digit;
		index++;
		num /= 8;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(oct_str[i]);
		xters_printed++;
	}

	va_end(args_cpy);
	return (xters_printed);
}
