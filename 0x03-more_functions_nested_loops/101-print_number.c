#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: input
 * Return: inputted integer
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0) { /* handle negative integers */
        _putchar('-');
        num = -n;
    } else {
        num = n;
    }

    if (num / 10)
        print_number(num / 10);

    _putchar((num % 10) + '0'); /* convert digit to character and print it */
}
