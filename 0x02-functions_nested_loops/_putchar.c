#include <unistd.h>
#include "main.h"

/**
 * _putchar - write a character to the stdout.
 *
 * @c: the character to print.
 *
 * Return: On success 1.
 * On error, return -1 and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

