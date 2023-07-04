#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * int a linked list_t list.
 * @h: linked list.
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
