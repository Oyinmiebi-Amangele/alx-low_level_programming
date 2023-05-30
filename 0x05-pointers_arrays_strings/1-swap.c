#include "main.h"

/**
 * swap_int - function that swaps two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: No returns.
 */

void swap_int(int *a, int *b)
{
	int test;

	test = *a;
	*a = *b;
	*b = test;
}
