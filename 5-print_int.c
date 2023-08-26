#include "main.h"

/**
 * print_int - a function to print an integer
 *
 * @args: param
 * @count: param
 *
 * Return: the xters ptinted
 */
int print_int(va_list args, int *count)
{
	int num = va_arg(args, int); /* Extract the next argument as an integer */
	char buffer[20]; /** declare a buffer to hold the string */
	int len = sprintf(buffer, "%d", num); /* int to string and store it*/
	int i; /* Declare a loop variable */

	for (i = 0; i < len; i++)
	{
		_putchar(buffer[i]);
		(*count)++;
	}
	return (len);
}
