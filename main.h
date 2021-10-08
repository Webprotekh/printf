#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
char *convert(unsigned long int num, int base, int lowercase);
int _putchar(char c);
int _puts(char *str);
int get_flag(char s, flags_t *f);
int (*get_print(char s))(va_list, flags_t *);
int print_address(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);
int print_unsigned(va_list l, flags_t *f);
void print_number(int n);
int count_digit(int i);
int print_bigS(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);

#endif
