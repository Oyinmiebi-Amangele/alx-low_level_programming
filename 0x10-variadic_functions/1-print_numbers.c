#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 * @separator: sign that separates the numbers.
 * @n: integer.
 *
 * Return: no returns.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
