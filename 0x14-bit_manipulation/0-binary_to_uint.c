#include "main.h"

/**
 * binary_to_uint - function that converts binary
 * number to an unsigned int.
 * @b: the binary number.
 *
 * Return: the converted number or
 * 0 if more one or more char that
 * is not 0 or 1 and if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int factor = 0;

	if (!b)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		factor = (factor * 2) + (b[i] - '0');
	}

	return (factor);
}
