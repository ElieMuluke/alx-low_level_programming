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
    int i, n = 98;
    unsigned int a = 1, b = 2, c;

    printf("%u, %u", a, b);

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf(", %u", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
