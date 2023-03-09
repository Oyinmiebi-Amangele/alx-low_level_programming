#include "main.h"

/**
 * factorial - function that finds the factorial of a number.
 * @n: number.
 * Return: returns -1 if n is lower than 0,1 if n is 0,the factorial of
 * the number for values greater than 1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
