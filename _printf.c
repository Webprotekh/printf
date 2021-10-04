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
	va_list lst;
	va_start(lst, format);
	while(*format!='\0')
	{
		if(*format!='%')
		{
			putchar(*format);
			format++;
			continue;
		}
		format++;
		switch(*format)
		{
		case 's':
			s = fputs(va_arg(lst, char *), stdout); break;
		case 'c':
			s = putchar(va_arg(lst, int)); break;
		}
		format++;
		}
	return (s);
}
