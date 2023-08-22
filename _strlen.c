#include "main.h"

/**
 * _strlen - counts characters.
 * @str: pointer to the string.
 * Return: number of strings.
 */

size_t _strlen(char *str)
{
	size_t count = 0;

	while (str[count] != '\0')
		count++;
	return (count);
}
