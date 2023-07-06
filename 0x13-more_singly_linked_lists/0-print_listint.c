#include "lists.h"
/**
 * print_listint - this prints all elements of the list
 * @h: head of the list
 * Return: the number of nodes in the given list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *curs = h;
	size_t cnt = 0;

	while (curs != NULL)
	{
		printf("%d\n", curs->n);
		cnt += 1;
		curs = curs->next;
	}
	return (cnt);
}
