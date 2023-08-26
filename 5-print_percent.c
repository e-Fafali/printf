#include "main.h"

/**
 * print_percent - as it says
 *
 * @args: paraim
 * @count: param
 *
 * Return: 1 for success
 *
 */
int print_percent(__attribute__((unused)) va_list args, int *count)
{
	_putchar('%');
	(*count)++;

	return (1);
}
