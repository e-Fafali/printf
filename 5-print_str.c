#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_str - Function to print strings
 *
 * @args: param
 *
 * Return: count.
 */
int print_str(va_list args)
{
	va_list  args_cpy;

	char *str = va_arg(args_cpy, char *);
	int count = 0;

	va_copy(args_cpy, args);
	/* puts */
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	va_end(args_cpy);
	return (count);
}
