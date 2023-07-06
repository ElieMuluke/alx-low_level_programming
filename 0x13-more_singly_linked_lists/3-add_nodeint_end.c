#include "lists.h"
/**
 * add_nodeint_end - add a new item at the end of listint_t list.
 * @head: first element of the list
 * @n: integer/value to add to the list
 *
 * Return: added element's address, or if it failed NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_item = NULL;

	if (head)
	{
		new_item = malloc(sizeof(listint_t));
		if (new_item)
		{
			new_item->n = n;
			new_item->next = NULL;
			if (*head)
			{
				listint_t *last = *head;

				while (last->next)
					last = last->next;
				last->next = new_item;
			}
			else
				*head = new_item;
		}
	}
	return (new_item);
}
