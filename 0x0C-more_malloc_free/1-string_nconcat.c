#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that joins two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, error value set to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int count1, count2, total, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (count1 = 0; s1[count1] != '\0'; count1++)
		;

	for (count2 = 0; s2[count2] != '\0'; count2++)
		;

	if (n > count2)
		n = count2;

	total = count1 + n;

	sout = malloc(total + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		if (i < count1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - count1];
	}
	sout[i] = '\0';

	return (sout);
}
