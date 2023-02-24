#include "main.h"

/**
 * more_numbers - function to print numbers 0-14 ten times.
 *
 * Return: no returns.
 */

void more_numbers(void);
{
	int a = 0, b;

	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
				_putchar((b % 10) + 48);
			}
		}
		_putchar('\n');
		a++;
	}
}
