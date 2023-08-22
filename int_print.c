#include "main.h"

/**
 * int_print - print integer | decimal | unsigned integer.
 * @x: the integer value.
 * Return: the count.
 */

int int_print(int x)
{
	int count = 0;

	if (x < 0)
	{
		x *= (-1);
		char_print('-');
		count += 1;
	}
	if (x / 10)
		int_print(x / 10);
	count += count;
	char_print((x % 10) + '0');
	return (count);
}

