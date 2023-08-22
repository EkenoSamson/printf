#include "main.h"

/**
 * get_specifier - assign the placeholder based the character next to '%';
 * @c: format specifier.
 * Return: address of the placeholder.
 */

int (*get_specifier(char c))(va_list)
{
	if (c == 'c')
		return (&char_placer);
	else if (c == 's')
		return (&str_placer);
	else if (c == 'd')
		return (&dec_placer);
	else
		return (NULL);
}
