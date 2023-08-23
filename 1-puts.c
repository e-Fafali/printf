#include <stdio.h>
#include "main.h"

/**
 * _puts - prints stuff out
 *
 * @str: string to print out
 *
 * Return: Always 0.
 */


void _puts(char *str)
{
	int ch;

	ch = 0;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
}
