#include "variadic_functions.h"

/**
 * sum_them_all - function that sums up all argmuments.
 * @n: integer.
 *
 * Return: sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_args(args, int);

		sum += x;
	}
	va_end(args);

	return (sum);
}
