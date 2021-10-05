#include "main.h"
/**
 * _printf - produces output according to a format
 *
 * @format: format specifier
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int s;
	va_list ap;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			format++;
			continue;
		}
		format++;
		switch (*format)
		{
		case 's':
			s = fputs(va_arg(ap, char *), stdout);
			break;
		case 'c':
			s = putchar(va_arg(ap, int));
			break;
		}
		format++;
		}
	return (s);
}
