#include "main.h"

/**
 * _strncat - function that concatenates two strings given an integer n.
 * @src: source string.
 * @dest: destination string.
 * @n: integer.
 *
 * Return: returns dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		dest[count] = src[count2];
		if (src[count2] == '\0')
		{
			break;
		}
		count++;
		count2++;
	}
	return (dest);
}
