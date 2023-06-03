#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: Always 0 (success).
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, opt = 0;

	while (opt == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else
		{
			opt = *(s1 + i) - *(s2 + i);
			i++;
		}
	}

	return (opt);
}
