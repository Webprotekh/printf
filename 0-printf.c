#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/** _printf - The function to print to std output
 * @format: The parameter for formating string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
    int i = 0;
    size_t amt = 0;
    char *ptr = NULL;
    va_list ap;

    va_start(ap, format);
    i = vsnprintf(ptr, amt, format, ap);
    va_end(ap);

    if (i < 0)
        return NULL;

    amt = (size_t) i + 1;
    ptr = malloc(amt);
    if (ptr == NULL)
        return NULL;

    va_start(ap, format);
    i = vsnprintf(ptr, amt, format, ap);
    va_end(ap);

    if (i < 0)
    {
        free(ptr);
        return NULL;
    }
    return ptr;


    /*int charcount = 0;
    int printint;
    char intstr[10];
    char *pprintstr;
    va_list vlist;

    va_start(vlist, format);
    */
}
