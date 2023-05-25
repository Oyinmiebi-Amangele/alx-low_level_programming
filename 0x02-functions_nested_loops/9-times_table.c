#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, o;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			o = a * b;
			_putchar(44);
			_putchar(32);
			if (p <= 9)
			{
				_putchar(32);
				_putchar(p + 48);
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
