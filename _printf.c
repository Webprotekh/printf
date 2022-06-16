#include "main.h"

/**
 *  _printf - Recreates printf
 *
 *  @format: format specifier
 *
 *  Return: Number of args length
 */

int _printf(const char *format, ...)
{

	int (*get_f_spec)(va_list);
	unsigned int index = 0, spec_count = 0;

	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
				return (-1);
			while (format[index] == ' ')
				index++;
			get_f_spec =  get_specifier(format[index]);

			if (get_f_spec == NULL)
			{
				_putchar('%');
				_putchar(format[index]);
				spec_count += 2;
			}
			else
				spec_count += get_f_spec(arg);
		}
		else
		{
			_putchar(format[index]);
			spec_count++;
		}
	}
	va_end(arg);
	return (spec_count);
}
