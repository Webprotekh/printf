#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define BUFFER 1024

/**
 * struct format_spec - Struct
 * @spec: specifier
 * @f: function, pointer
 */

typedef struct format_spec
{
	char  *spec;
	int (*f)(va_list);
} spec_type;

int _printf(const char *format, ...);
int (*get_specifier(char format))(va_list);
int get_int(va_list arg);
int get_unsigned(va_list arg);
int get_char(va_list arg);
int get_string(va_list arg);
int get_reverse(va_list arg);
void _puts(char *str);
int _putchar(char c);
int _strlen(char *str);
int rev_string(va_list arg);
int get_percent(va_list arg);
int get_hex(va_list arg);
int get_heX(va_list arg);
int get_binary(va_list arg);
int get_octal(va_list arg);
int get_rot13(va_list arg);

#endif
