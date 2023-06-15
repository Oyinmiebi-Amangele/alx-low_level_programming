#include <stdio.h>

/**
 * main - function that prints the first argument.
 * on the command line.
 * @argc: command line argument count.
 * @argv: command line argument vector.
 *
 * Return: Always 0 (success).
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
