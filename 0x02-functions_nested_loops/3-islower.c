#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: character in ASCII code.
 *
 * Return: 1 for lowercase, 0 if not.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
