#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: double points to head of list
 *
 * Return: number of items freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_item, *next_item;

	if (!h || !*h)
		return (0);

	current_item = *h;
	while (current_item)
	{
		next_item = current_item->next;
		free(current_item);
		count++;

		if (current_item >= next_item)
			break;

		current_item = next_item;
	}

	*h = NULL;

	return (count);
}
