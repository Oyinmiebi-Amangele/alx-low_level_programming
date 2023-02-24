#include "main.h"

/**
 * print_diagonal - function that prints diagonals n times.
 * @n: the number of times the diagonal should be printed.
 * Return: no returns.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
