#include "main.h"

/**
 * reverse_array - function that reverses the content of an
 * array of integers.
 * @a: the array.
 * @n: number of elements of the array.
 *
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
                a[start] = a[end];
                a[end] = temp;
		start++;
		end--;
	}
}
