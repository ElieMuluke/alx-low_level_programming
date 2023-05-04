#include "main.h"

/**
 * To count the number of bits to be changed
 * so that we can get from one number to another
 * x is the first number
 * y is the second number
 *
 * Return the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

