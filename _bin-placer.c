#include "main.h"

/**
 * bin_placer - handles binary conversion.
 * @arguments: arguments expected from the vaiadic function.
 * Return: The number of characters printed on the screen.
 */

int bin_placer(va_list arguments)
{
	int p = 0;
	int num = va_arg(arguments, int);
	int count = int_bin(num, &p);

	return (count);
}
