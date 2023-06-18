#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that joins two strings together.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the newly allocated
 * memory space of the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int count1, count2, total, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (count1 = 0; s1[count1] != '\0'; count1++)
		;
	for (count2 = 0; s2[count2] != '\0'; count2++)
		;

	total = count1 + count2;

	ptr = malloc(total + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= total; i++)
	{
		if (i < count1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - count1];
	}

	ptr[i] = '\0';

	return (ptr);
}

