#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
    if (size <= 0) {
        _putchar('\n');
        return;
    }

    int i,j,k;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size - i; j++)
            _putchar(' ');
        for (k = 1; k <= i; k++)
            _putchar('#');
        _putchar('\n');
    }
}
