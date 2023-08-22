#include "main.h"

/**
 * dec_placer - handles decimals.
 * @arguments: user input.
 * Return: decimals printed.
 */

int dec_placer(va_list arguments)
{
	int dec = va_arg(arguments, int);
	int count = int_print(dec);

	return (count);
}
