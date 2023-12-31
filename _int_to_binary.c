#include "main.h"

/**
 * int_bin - converts int to binary.
 * @x: integer.
 * @count: pointer count.
 * Return: number of charactes printed.
 */

int int_bin(int x, int *count)
{
	if (x / 2)
		int_bin((x / 2), count);
	*count += 1;
	char_print((x % 2) + '0');
	return (*count);
}
