#include <stdio.h>
#include "main.h"

/**
 * print_str - Function to print strings
 *
 * @va_list: param
 * @args: param
 *
 * Return: count.
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 1;
	
	/* puts */
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return count;
}
