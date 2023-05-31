#include "main.h"
/**
 * print_array - function that prints an array.
 * @a: array.
 * @n: number of array element.
 *
 * Return: no returns.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
