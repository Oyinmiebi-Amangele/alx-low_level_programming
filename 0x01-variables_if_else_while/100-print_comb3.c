#include <stdio.h>

/**
 * main - Prints all the combinations of two numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (i != j && i > j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

