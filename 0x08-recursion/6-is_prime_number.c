#include "main.h"

/**
 * finder - function to check for prime numbers.
 * @n: input integer.
 * @r: input integer.
 *
 * Return: 1 if prime and 0 if not prime.
 */

int finder(unsigned int n, unsigned int r)
{
	if (n % r == 0 && n / r == 1)
	{
		if (n == r)
			return (1);
		else
			return (0);
	}
	return (0 + finder(n, r + 1));
}

/**
 * is_prime_number - function that prints out prime numbers.
 * @n: input integer.
 *
 * Return: the result of the finder function.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (finder(n, 2));
}
