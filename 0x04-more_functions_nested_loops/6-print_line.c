#include "stdio.h"
#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    int i;
    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
