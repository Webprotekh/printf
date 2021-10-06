#include "main.h"
#include <stdlib.h>
#include <unistd.h>

char* _itoa(int val, int base){

	static char buf[32] = {0};

	int i = 30;

	for(; val && i ; --i, val /= base)

		buf[i] = "0123456789abcdef"[val % base];

	return &buf[i+1];

}

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
	char ch;
	char *str;
//	int no;
//	char ch2;
//	int len = strlen(str);

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
			str = va_arg(ap, char *);
			s = fputs(str, stdout);
			break;
		case 'c':
			ch = va_arg(ap, int);
			s = fputc(ch, stdout);
			break;
		case '%':
			s = fputc('%', stdout);
			break; 
		}
		format++;
		}
	return (s);
}
