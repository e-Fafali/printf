#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * power - a function to calculate power
 *
 * @base: param
 * @exp: param
 *
 * Return: result.
 */

int power(int base, int exp)
{
	int result = 1;

	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * print_int - a function to print an integer
 *
 * @args: param
 *
 * Return: the xters ptinted
 */
int print_int(va_list args)
{
	va_list args_cpy;
	
	int digits = 0;
	char digit;
	int num = va_arg(args_cpy, int);
	int xters_printed = 0;
	int temp = num;

	/* va_list args_cpy; */
	va_copy(args_cpy, args);


	if (num == 0)
	{
		_putchar('0');
		va_end(args_cpy);
		return (1);
	}

	while (temp > 0)
	{
		temp /= 10;
		digits++;
	}

	temp = num;
	while (digits > 0)
	{
		digit = '0' + temp / power(10, digits - 1);
		_putchar(digit);
		temp %= power(10, digits - 1);
		digit--;
		xters_printed++;
	}

	va_end(args_cpy);
	return (xters_printed);
}
