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
		/* swap the element at start & end position */
		temp = start;
		start = end;
		end = start;
		/* move the start and end position towards the middle */
		start++;
		end--;
	}
}
