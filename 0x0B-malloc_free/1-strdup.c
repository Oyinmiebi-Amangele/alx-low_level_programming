#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that copies a string to a
 * newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer to the duplicate string.
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int count;

	if (str == NULL)
		return (NULL);

	for (count = 0; str[count] != '\0'; count++)
		;

	ptr = malloc(sizeof(str) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';

	return (ptr);
}
