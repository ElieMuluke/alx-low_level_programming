#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_t - more singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: more singly linked list node structure
 * for Holberton project
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */