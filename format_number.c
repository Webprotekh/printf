#include "main.h"

/**
 *  get_int - Prints integersfor i, d, u flags
 *
 *  @arg: va_list name
 *
 *  Return: Integer
 */

int get_int(va_list arg)
{
	int n;
	int num;
	int last;
	int digit;
	int exp = 1;
	int index = 1;

	n = va_arg(arg, int);
	last = n % 10;

	n /= 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		index++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp /= 10;
			index++;
		}
	}
	_putchar(last + '0');
	return (index);
}


/**
 *  get_unsigned - Prints unsigned integers
 *
 *  @arg: va_list name
 *
 *  Return: Integer
 */


int get_unsigned(va_list arg)
{
	int index = 0, sum = 0, digit, last_digit;
	int div = 1000000000;
	unsigned int num = va_arg(arg, unsigned int);

	while (div > 1)
	{
		digit = (num / div) % 10;
		sum += digit;

		if (sum != 0)
		{
			_putchar(digit + '0');
			index++;
		}
		div /= 10;
	}
	last_digit = num % 10;
	_putchar(last_digit + '0');
	index++;

	return (index);
}


/**
 * get_octal - Prints octal
 *
 * @arg: va_list
 *
 * Return: Integer
 */
int get_octal(va_list arg)
{
	int i = 0, j = 0;

	char octal[50];
	unsigned int getOctal = va_arg(arg, unsigned int);

	if (getOctal == 0)
	{
		octal[i] = (0 + '0');
		i++;
	}

	while (getOctal != 0)
	{
		octal[i] = (getOctal % 8) + '0';
		getOctal /= 8;
		i++;
	}
 	for (i = i - 1; i >= 0; i--)
	{
		_putchar(octal[i]);
		j++;
	}
	return (j);
}


/**
 * get_rot13 - Prints rot13
 *
 * @arg: va_list
 *
 * Return: Integer
 */

int get_rot13(va_list arg)
{
	int i, j, flag, count = 0;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char *rot = va_arg(arg, char*);

	for (i = 0; rot[i]; i++)
	{
		flag = 0;
		for (j = 0; input[j] && !flag; j++)
		{
			if (rot[i] == input[j])
			{
				_putchar(output[j]);
				count++;
				flag = 1;
			}
		}
		if (!flag)
		{
			_putchar(rot[i]);
			count++;
		}
	}
	return(count);
}
