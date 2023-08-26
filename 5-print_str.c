#include "main.h"

/**
 * print_str - Function to print strings
 *
 * @args: param
 * @count: param
 *
 * Return: count.
 */
int print_string(va_list args, int *count)
{
	char *str = va_arg(args, char *); /* Extract the next arg as a string */
	char *p; /* declare a pointer to loop through the string */

	for (p = str; *p != '\0'; p++)
	{
		/* Loop through each xter of the string and print it with _putchar */
		_putchar(*p);
		(*count)++;
	}
	return (p - str);
}
