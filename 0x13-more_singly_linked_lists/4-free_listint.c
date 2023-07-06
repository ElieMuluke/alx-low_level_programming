#include "lists.h"

/**
 * free_listint - frees a linked list listint_t list.
 * @head: first element of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
