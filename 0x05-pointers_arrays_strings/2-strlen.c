#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: a string.
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
