#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: first element of the list
 *
 * Return: the accumulation of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	int accumulation;

	if (!head)
		return (0);

	accumulation = 0;
	while (head)
	{
		accumulation += head->n;
		head = head->next;
	}

	return (accumulation);
}
