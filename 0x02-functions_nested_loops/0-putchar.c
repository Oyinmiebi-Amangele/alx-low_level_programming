#include "main.h"

/**
 * main - program that prints characters
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');

	return (0);
}
