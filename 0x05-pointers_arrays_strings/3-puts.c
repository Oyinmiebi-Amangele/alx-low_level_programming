#include "main.h"

/**
 * _puts - function that prints a string to the output.
 * @str: String character.
 *
 * Return: No returns.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
