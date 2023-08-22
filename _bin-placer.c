#include "main.h"

/**
 * bin_placer - handles binary conversion.
 * @arguments: arguments.
 * Return: number of characters printed on the screen.
 */

int bin_placer(va_list arguments)
{
	int num = va_arg(arguments, int);
	int count = int_bin(num);

	return (count);
}
