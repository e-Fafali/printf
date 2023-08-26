#include "main.h"

/**
 * print_intger - as it says
 *
 * @args: paraim
 * @count: param
 *
 * Return: len for success
 *
 */
int print_integer(va_list args, int *count)
{
	int num = va_arg(args, int);
	char buffer[20];
	int len = sprintf(buffer, "%d", num);
	int i;

	for (i = 0; i < len; i++)
	{

		_putchar(buffer[i]);
		(*count)++;
	}

	return (len);
}
