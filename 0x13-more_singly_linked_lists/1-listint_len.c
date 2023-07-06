#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: the number of nodes in the given list
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *curs = h;
	size_t cnt = 0;

	while (curs != NULL)
	{
		cnt += 1;
		curs = curs->next;
	}
	return (cnt);
}
