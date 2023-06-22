#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array.
 * @size: size of the array.
 * @cmp: function pointer.
 *
 * Return: index of the first element for which cmp
 * function does not return 0. if no element
 * matches return -1, if size <=0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
