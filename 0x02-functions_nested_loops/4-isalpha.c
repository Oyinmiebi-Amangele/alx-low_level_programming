#include "main.h"

/**
 * _isalpha - function that checks for alphabetic characters
 *
 * @c: ASCii characters.
 *
 * Return: 1 for letter,lowercase or uppercase and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
