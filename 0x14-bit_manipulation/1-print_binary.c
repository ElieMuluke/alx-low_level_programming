#include "main.h"

/**
 * to print the binary of the decimal number
 * a is number to be printed in binary format
 */


void print_binary(unsigned long int a)
{
	int i, count = 0;
	unsigned long int current_value;

	for (i = 63; i >= 0; i--)
	{
		current_value = a >> i;

		if (current_value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

