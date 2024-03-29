#include "lists.h"

/**
 * add_node - function that add a node at
 * the beginnning.
 * @head: head of the list.
 * @str: string to store in the list.
 * Return: the address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t num;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (num = 0; str[num]; num++)
		;
	new->len = num;
	new->next = *head;
	*head = new;

	return (*head);
}
