#include "main.h"

/**
 *get_reverse - shows the pointer of the var
 *@arg: var for string pointer
 *Return: (rev string)
 */

int get_reverse(va_list arg)
{
	int index = 0, length = 0;
	char *rev = va_arg(arg, char*);

	if (rev == NULL)
	{
		return (0);
	}

	while (rev[length] != '\0')
	{
		index++;
		length++;
	}
	length--;

	while (length >= 0)
	{
		_putchar(rev[length]);
		length--;
	}
	return (index);
}

/**
 * get_percent - Checks for unused args
 *
 * @arg: va_list name
 *
 * Return: Percent character
 */

int get_percent(va_list __attribute__((unused)) arg)
{
	_putchar('%');

	return (1);
}


/**
* get_hex - Convert to hexadecimal lowercase
*
* @arg: va_list name
*
* Return: Hex value
*/

int get_hex(va_list arg)
{
	unsigned int hex_convert = va_arg(arg, unsigned int);

	int i = 0, j = 0, hex = 0, temp = 0;
	char hex_array[48];

	while (hex_convert != 0)
	{
		temp = 0;

		temp = hex_convert % 16;

		if (temp < 10)
		{
			hex_array[i] = temp + 48;
			i++;
		}
		else
		{
			hex_array[i] = temp + 87;
			i++;
		}
		hex_convert /= 16;
	}
	hex = 0;

	for (j = i - 1; j >= 0;  j--)
	{
		_putchar(hex_array[j]);
		hex++;
	}
	return (hex);
}


/**
* get_heX -convert to hexadecimal uppercase
*
* @arg: va_list name
*
* Return: Hex value
*/


int get_heX(va_list arg)
{
	unsigned int hex_convert = va_arg(arg, unsigned int);

	int i = 0, j = 0, hex = 0, temp = 0;
	char hex_array[48];

	while (hex_convert != 0)
	{
		temp = 0;

		temp = hex_convert % 16;

		if (temp < 10)
		{
			hex_array[i] = temp + 48;
			i++;
		}
		else
		{
			hex_array[i] = temp + 55;
			i++;
		}
		hex_convert /= 16;
	}
	hex = 0;

	for (j = i - 1; j >= 0;  j--)
	{
		_putchar(hex_array[j]);
		hex++;
	}
	return (hex);
}


/**
* get_binary -convert to hexadecimal uppercase
*
* @arg: va_list name
*
* Return: Hex value
*/

int get_binary(va_list arg)
{
	unsigned int index, binary;
	unsigned int bit_count[32];

	unsigned int num = va_arg(arg, int);

	index = 0;
	binary = 0;

	if (num < 1)
	{
		_putchar (48);
		index++;
		return (index);
	}

	while (num > 0)
	{
		bit_count[index] = num % 2;
		num /= 2;
		index++;
	}

	for (binary = index - 1; binary > 0; binary--)
	{
		_putchar('0' + bit_count[binary]);
	}
	_putchar('0' + bit_count[binary]);

	return (index);
}
