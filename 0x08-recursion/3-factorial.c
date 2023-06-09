#include "main.h"

/**
 * factorial - function that finds the factorial of a
 * given number.
 * @n: number.
 *
 * Return: 1 for n equal 0, -1 for n less than 0 and result
 * for n greater than 0.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
