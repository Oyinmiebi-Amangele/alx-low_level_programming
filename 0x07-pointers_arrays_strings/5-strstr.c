#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: first string.
 * @needle: second string.
 * Return: a pointer to the beginning of the located substring, or NUll
 * if the substring in not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (haystack);
		haystack = haystack + 1;
	}
	return (0);
}
