#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: points to head of list
 *
 * Return: number of items in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_item, *next_item;

	if (!head)
		exit(98);

	current_item = head;
	while (current_item)
	{
		next_item = current_item->next;
		printf("[%p] %d\n", (void *)current_item, current_item->n);
		count++;

		if (current_item >= next_item)
		{
			printf("-> [%p] %d\n", (void *)next_item, next_item->n);
			break;
		}

		current_item = next_item;
	}

	return (count);
}
