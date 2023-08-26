#include "main.h"

/**
 * print_char - as it says
 *
 * @args: param
 * @count: param
 *
 * Return: 1 for success
 */

int print_char(va_list args, int *count)
{
	char ch = va_arg(args, int);

	_putchar(ch);
	(*count)++;

	return (1);
}
