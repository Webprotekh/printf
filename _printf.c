#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _itoa: converts integer to ascci code
 *
 * @val: integer
 * @base: base of the integer
 *
 * Returns: Ascci value
 */
char* _itoa(int val, int base)
{
	static char buf[32] = {0};

	int i = 30;

	for(; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return &buf[i+1];
}
/**
 * print_int - prints integers or decimal
 *
 * @no: number to be printed
 * @ap: variable argument
 */
void print_int(int no, va_list ap)
{
	no = va_arg(ap, int);
	if (no < 0)
	{
		no = -no;
		putchar('-');
	}
	fputs(_itoa(no, 10), stdout);
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
	int no;

	no = 0;
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
		case 'd':
			print_int(no, ap);
			break;
		case 'i':
			print_int(no, ap);
			break;
		}
		format++;
		}
	return (s);
}
