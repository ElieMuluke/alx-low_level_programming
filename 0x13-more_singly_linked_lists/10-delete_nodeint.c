#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the item at x given position.
 * @head: first element of the list
 * @index: index of the list where the new item should be added, 0 indexed
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_item, *next_item;
	unsigned int c_index;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		next_item = (*head)->next;
		free(*head);
		*head = next_item;
		return (1);
	}

	current_item = *head;
	for (c_index = 0; c_index < index - 1; c_index++)
	{
		if (!current_item)
			return (-1);
		current_item = current_item->next;
	}

	next_item = current_item->next;
	current_item->next = next_item->next;
	free(next_item);

	return (1);
}
