#include "main.h"

/**
 * _length - function that finds the length of a string.
 * @s: string.
 *
 * Return: the length of the string.
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _length(s + 1));
}

/**
 * _compare - function that compares the beginning
 * of a string to the end of the string.
 * @s: string.
 * @n1: lower denomination.
 * @n2: higher denominationn.
 * Return: comparision.
 */
int _compare(char *s, int n1, int n2)
{
	if (s[n1] == s[n2])
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that check if a string is
 * spelt the same forward and backward.
 * @s: string.
 * Return: 1 if true and 0 if false.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _length(s) - 1));
}
