#include <stdio.h>
#include "main.h"

/* Define an array of function pointers indexed by ASCII values */

#define NUM_FORMAT_FUNCTIONS 256

FormatFunction format_functions[NUM_FORMAT_FUNCTIONS]; 

int _printf(const char *format, ...) 
{
    va_list args;

    int characters_printed = 0;
    const char *c;

	FormatFunction function;

	va_start(args, format); 

    for (c = format; *c != '\0'; c++) 
	{
        if (*c == '%' && (*(c + 1)) != '\0') 
		{
            c++;
            function = format_functions[(unsigned char)*c];

            if (function) {
                va_list args_cpy;
                va_copy(args_cpy, args);
                characters_printed += function(args_cpy);
                va_end(args_cpy);
            } else {
                _putchar(*c);
                characters_printed++;
            }
        } else {
            _putchar(*c);
            characters_printed++;
        }
    }

    va_end(args);
    return characters_printed;
}

