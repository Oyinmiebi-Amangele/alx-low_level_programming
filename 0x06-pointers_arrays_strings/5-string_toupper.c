#include "main.h"

/**
 * string_toupper - function that converts all lowercase letters to uppercase.
 * @s: array of the string.
 *
 * Return:  returns the converted string.
 */

char *string_toupper(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		for (i = 97; i <= 122; i++)
		{
			if (s[count] == i)
			{
				s[count] = s[count] - 32;
			}
			else
			{
				s[count] = s[count];
			}
		}
		count++;
	}
}
