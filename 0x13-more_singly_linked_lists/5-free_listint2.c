#include "lists.h"
/**
 * free_listint2 - frees a linked list listint_t list.
 * @head: first element of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
