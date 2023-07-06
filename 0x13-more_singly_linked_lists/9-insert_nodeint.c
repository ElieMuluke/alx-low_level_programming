#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new item at x given position.
 * @head: first element of the list
 * @idx: index of the list where the new node should be added, 0 indexed
 * @n: data to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_item, *current_item;
	unsigned int c_index;

	if (!head)
		return (NULL);

	new_item = malloc(sizeof(listint_t));
	if (!new_item)
		return (NULL);

	if (!idx)
	{
		new_item->n = n;
		new_item->next = *head;
		*head = new_item;
		return (*head);
	}

	current_item = *head;
	for (c_index = 0; c_index < idx - 1; c_index++)
	{
		if (!current_item)
		{
			free(new_item);
			return (NULL);
		}
		current_item = current_item->next;
	}

	new_item->n = n;
	new_item->next = current_item->next;
	current_item->next = new_item;

	return (new_item);
}
