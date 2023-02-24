#include <stdio.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
long largest_factor(long n)
{
    long factor = 2;

    while (n > factor)
    {
        if (n % factor == 0)
            n /= factor;
        else
            factor++;
    }

    return factor;
}
