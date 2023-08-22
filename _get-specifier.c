#include "main.h"

/**
 * get_specifier - assign the placeholder based the character next to '%';
 * @c: pointer to the format specifier.
 * Return: address of the placeholder.
 */

int (*get_specifier(char c))(va_list)
{
	if (c == 'c')
		return (&char_placer);
	else if (c == 's')
		return (&str_placer);
	else if (c == 'd' || c == 'i')
		return (&dec_placer);
	else if (c == 'b')
		return (&bin_placer);
	else
		return (NULL);
}
