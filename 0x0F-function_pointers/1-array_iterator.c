#include "function_pointers.h"

/**
 * array_iterator - funtion that executes a function
 * on each element of an array.
 * @array: the array
 * @size: the size of the array.
 * @action: function pointer.
 *
 * Return: no  returns.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
