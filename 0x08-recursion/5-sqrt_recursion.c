#include "main.h"

/**
 * power_operator - function that finds the number
 * that gives a perfect square.
 * @n: the first integer.
 * @a: second integer.
 *
 * Return: returns the integer that gives a perfect square.
 */

int power_operator(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
		{
			return (a);
		}
		else
			return (-1);
	}
	return (0 + power_operator(n, a + 1));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: integer.
 *
 * Return: returns the value.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operator(n, 2));
}
