#include <stdio.h>

/**
 * main - To print the combinations of numbers independently
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, e;

	i = '0';
	e = '0';

	while (e <= '9')
	{
		i = '0';
		while (i <= '9')
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == '9' && e == '8')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
