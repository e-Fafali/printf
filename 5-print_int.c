#include <stdio.h>
#include "main.h"

/**
 * power - a function to calculate power
 *
 * @base: param
 * @exponent: param
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
	return result;
}

/**
 * print_int - a function to print an integer
 *
 * @va_list: param
 * @args: param
 *
 *
 */
int print_int(va_list args)
{
	int digits = 0; 
	char digit;
	int num = va_arg(args, int);
	int xters_printed = 0;
	int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return 1;
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
	return (xters_printed);
}




















