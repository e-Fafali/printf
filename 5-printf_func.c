#include "main.h"

/**
 * get_format_func - get the format to print
 *
 * @spec: param
 *
 * Return: the default specifier
 */

format_spec get_format_func(char spec)
{
	format_spec format_specifier[] = {

		{'d', print_int},
		{'s', print_str},
		{'o', print_octal},
		{'%', print_percent},
		{'c', print_char},
		{0, NULL}
	};

	int i = 0;
	format_spec default_spec = {0, NULL};

	for (i = 0; format_specifier[i].spec != 0; i++)
	{
		if (format_specifier[i].spec == spec)
		{
			return (format_specifier[i]);
		}
	}	

	/* format_spec default_spec = {0, NULL}; */
	return (default_spec);
}
