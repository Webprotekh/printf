#include "main.h"

/**
* get_char - Prints for c flag
*
* @arg: va_list name
*
* Return:  Character
*/


int get_char(va_list arg)
{
	char character = va_arg(arg, int);

	return (_putchar(character));
}


/**
* get_string - Prints for s flag
*
* @arg: va_list name
*
* Return:  Character pointer
*/

int get_string(va_list arg)
{
	int count;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	return (count);
}
