#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: points to head of list
 *
 * Return: address of node where loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current_item, *next_item;

	if (!head)
		return (NULL);

	current_item = head;
	while (current_item)
	{
		next_item = current_item->next;

		if (current_item >= next_item)
			return (current_item);

		current_item = next_item;
	}

	return (NULL);
}
