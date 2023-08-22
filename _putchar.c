#include "main.h"

/**
 * char_print - display the character.
 * @c: character to be printed.
 */

void char_print(char c)
{
	write(1, &c, 1);
}
