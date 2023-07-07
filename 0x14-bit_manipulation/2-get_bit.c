#include "main.h"

/**
 * to return the value the bit at an certain index in a decimal number
 * a is the number to search for
 * index is the index of the bit
 *
 * Return: the value of the specific bit
 */

int get_bit(unsigned long int a, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (a >> index) & 1;

	return (bit_value);
}

