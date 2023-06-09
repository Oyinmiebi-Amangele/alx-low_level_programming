#include "main.h"

/**
 * _pow_recursion - function that finds the value of a
 * number raised to the power of another number.
 * @x: first number.
 * @y: second number.
 *
 * Return: -1 if y is lower that 0.
 * return 1 if y is equal to 0.
 * return result if y is greater than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
