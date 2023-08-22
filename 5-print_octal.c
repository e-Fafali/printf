#include <stdio.h>
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
	unsigned int num = va_arg(args, unsigned int);
	char oct_str[32]; /* octal */
	
	/* lets reverse it */
	int xters_printed = 0;
	int i;
	
	/* Let's do some conversion */
	int index = 0;

	while (num > 0)
	{
		int digit = num % 8;
		oct_str [index] = '0' + digit;
		index++;
		num /=8;
	}
	
	for (i = index - 1; i >= 0; i++)
	{
		_putchar(oct_str[i]);
		xters_printed++;
	}

	return (xters_printed);
}
