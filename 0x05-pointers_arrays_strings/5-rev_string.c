#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string character.
 *
 * Return: no returns.
 */

void rev_string(char *s)
{
	int i, j;
	int count = 0;
	int temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
