#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, n = 50;
    long int f1 = 1, f2 = 2, next;

    printf("%ld, %ld", f1, f2);

    for (i = 3; i <= n; i++)
    {
        next = f1 + f2;
        printf(", %ld", next);
        f1 = f2;
        f2 = next;
    }

    printf("\n");

    return 0;
}
