#include "main.h"

/**
 * str_placer - replace 's' with string arguments.
 * @arguments: input form the user.
 * Return: size of the string.
 */

int str_placer(va_list arguments)
{
	char *str_holder;
	int str_length;

	str_holder = va_arg(arguments, char *);
	if (str_holder == NULL)
	{
		str_holder = "(null)";
		write(1, str_holder, 6);
		return (6);
	}
	str_length = _strlen(str_holder);
	write(1, str_holder, str_length);
	return (str_length);
}


