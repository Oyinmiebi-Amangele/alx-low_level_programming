#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * @size: size of the array.
 * @c: string character.
 *
 * Return: pointer to the array and NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
