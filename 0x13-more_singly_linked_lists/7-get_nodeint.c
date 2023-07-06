#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list.
 * @head: first element of the list
 * @index: index of the node, 0 indexed
 *
 * Return: nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *item;
	unsigned int i;

	if (!head)
		return (NULL);

	item = head;
	for (i = 0; i < index; i++)
	{
		if (!item)
			return (NULL);
		item = item->next;
	}

	return (item);
}
