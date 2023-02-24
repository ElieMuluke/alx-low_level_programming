#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number of times tables to print
 * Return: void
 */

void print_times_table(int n)
{
    int i, j, res;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            res = i * j;
            if (j == 0)
                printf("%d", res);
            else
                printf("%4d", res);
            if (j == n)
                printf("\n");
            else
                printf(",");
        }
    }
}
