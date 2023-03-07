#include "main.h"

/**
 * _strspn - function that gives the length of a prefix substring.
 * @s: string contained in s variable.
 * @accept: strings contained in accept variable.
 * Return: the number of strings accept has in s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool = 1;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
