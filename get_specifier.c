#include "main.h"

/**
 *  get_specifier - Link format specifier to appropriate function
 *
 *  @format: Format character
 *
 *  Return: Type of specifierx
 */


int (*get_specifier(char format))(va_list)
{
	int i;

	spec_type type[] = {
		{"i", get_int},
		{"d", get_int},
		{"u", get_unsigned},
		{"c", get_char},
		{"s", get_string},
		{"r", get_reverse},
		{"x", get_hex},
		{"X", get_heX},
		{"b", get_binary},
		{"o", get_octal},
		{"R", get_rot13},
		{"%", get_percent},
		{NULL, NULL}
	};

	for (i = 0; type[i].spec != NULL; i++)
	{
		if (format == *type[i].spec)
		{
		return (type[i].f);
		}
	}
	return (NULL);
}
