#include "main.h"
/**
 * main - This function aims to print out '_putchar' using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
