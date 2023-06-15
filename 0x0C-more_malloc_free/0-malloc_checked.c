#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using
 * malloc
 * @b: integer variable.
 *
 * Return: pointer to allocated memory or error 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
