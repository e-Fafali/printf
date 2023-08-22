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
	char ch = va_arg(args, int);
	_putchar(ch);
	return (1);
}
