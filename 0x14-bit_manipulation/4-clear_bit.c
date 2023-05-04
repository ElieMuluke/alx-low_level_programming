#include "main.h"

/**
 * To set the value of a certain bit to 0
 * a is a pointer to the number to be changed
 * index is the index of the bit to be cleared
 *
 * Return: 1 if successful, -1 if fails
 */
int clear_bit(unsigned long int *a, unsigned int index)
{
	if (index > 63)
		return (-1);

	*a = (~(1UL << index) & *a);
	return (1);
}

