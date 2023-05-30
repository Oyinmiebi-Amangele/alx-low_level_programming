#include "main.h"
/**
 * _strlen - function that gives us the length of a string.
 * @s: String character.
 *
 * Return: The count of the string.
 */
int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
