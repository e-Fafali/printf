#include "main.h"

/**
 * print_octal - as it says
 *
 * @args: paraim
 * @count: param
 *
 * Return: len
 */
int print_octal(va_list args, int *count)
{
	/* Extract the next argument as an unsigned integer */
	unsigned int num = va_arg(args, unsigned int);

	/* Declare a buffer to hold the string representation of the integer */
	char buffer[20];

	/**
	* Convert the integer to a string in octal
	* format and store it in the buffer
	*/
	int len = sprintf(buffer, "%o", num);

	int i; /* Declare a loop variable */

	for (i = 0; i < len; i++)
	{
		/**
		 * Loop through each character of the buffer
		 * and print it using putchar
		 */
		putchar(buffer[i]);
		(*count)++;
	}

	/* Return the number of characters printed */
	return (len);
}
