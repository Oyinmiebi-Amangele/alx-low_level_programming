#include "main.h"

/**
 * swap_int - This function swaps two integer values.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
