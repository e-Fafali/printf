#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_str - Function to print strings
 *
 * @args: param
 *
 * Return: count.
 */
int print_str(va_list args)
{

	va_list  args_cpy;

	char *str = va_arg(args_cpy, char *);
	int count = 0;
	char *str_copy;

	va_copy(args_cpy, args);

	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
			count++;
		}

		str_copy = (char *)malloc(count + 1);
		if (str_copy != NULL) 
		{
			char *temp = str_copy;
        
			while (*str != '\0') 
			{
            	*temp = *str;
            	temp++;
            	str++;
        	}
        	*temp = '\0'; 
        	free(str_copy);
    	}
	}

	va_end(args_cpy);
	return (count);
}
