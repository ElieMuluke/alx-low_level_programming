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
    int prev = 1, curr = 2, sum = 0, temp;

    while (curr <= 4000000) {
        if (curr % 2 == 0) {
            sum += curr;
        }
        temp = prev + curr;
        prev = curr;
        curr = temp;
    }

    printf("%d\n", sum);

    return 0;
}
