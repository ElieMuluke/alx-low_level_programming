#include "main.h"

/**
 * To set a bit at a certain index to 1
 * a is the pointer to the number that will change
 * index is the index of the bit to be set to 1
 *
 * Return: 1 if success, -1 if fails
 */
int set_bit(unsigned long int *a, unsigned int index)
{
	if (index > 63)
		return (-1);

	*a = ((1UL << index) | *a);
	return (1);
}

