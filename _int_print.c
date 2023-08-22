#include "main.h"

/**
 * int_print - print integer | decimal | unsigned integer.
 * @x: the integer value.
 * @count: pointer to count.
 * Return: the count.
 */

int int_print(long int x, int *count)
{
	if (x < 0)
	{
		x *= (-1);
		char_print('-');
		*count += 1;
	}
	if (x / 10)
		int_print((x / 10), count);
	*count += 1;
	char_print((x % 10) + '0');
	return (*count);
}

