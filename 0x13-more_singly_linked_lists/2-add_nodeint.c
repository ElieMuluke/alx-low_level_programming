#include "lists.h"
/**
 * add_nodeint - add a new item at the beginning of listint_t list.
 * @head: first element of the list
 * @n: integer/value to add to the list
 *
 * Return: added element's address, or if it failed NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_item = NULL;

	if (head)
	{
		new_item = malloc(sizeof(listint_t));
		if (new_item)
		{
			new_item->n = n;
			new_item->next = *head;
			*head = new_item;
		}
	}

	return (new_item);
}
