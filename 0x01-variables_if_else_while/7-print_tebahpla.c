#include <stdio.h>

/**
 * main - program that prints the alphabets in reverse order.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
