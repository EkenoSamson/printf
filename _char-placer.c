#include "main.h"

/**
 * char_placer - replace c with a character argument.
 * @arguments: argument it receives through the variadic func.
 * Return: 1 (number of character printed).
 */

int char_placer(va_list arguments)
{
	char char_holder;

	char_holder = va_arg(arguments, int);
	write(1, &char_holder, 1);
	return (1);
}
