#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int i, j, k;
    int len1, len2, len_mul;
    int *mul;
    char *num1, *num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    len1 = 0;
    while (num1[len1])
    {
        if (num1[len1] < '0' || num1[len1] > '9')
        {
            printf("Error\n");
            return (98);
        }
        len1++;
    }

    len2 = 0;
    while (num2[len2])
    {
        if (num2[len2] < '0' || num2[len2] > '9')
        {
            printf("Error\n");
            return (98);
        }
        len2++;
    }

    len_mul = len1 + len2;
    mul = calloc(len_mul, sizeof(*mul));
    if (!mul)
    {
        printf("Error\n");
        return (98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            k = (num1[i] - '0') * (num2[j] - '0');
            mul[i + j + 1] += k;
        }
    }

    for (i = len_mul - 1; i > 0; i--)
    {
        if (mul[i] > 9)
        {
            mul[i - 1] += mul[i] / 10;
            mul[i] %= 10;
        }
    }

    i = 0;
    while (mul[i] == 0 && i < len_mul - 1)
        i++;

    for (; i < len_mul; i++)
        printf("%d", mul[i]);
    printf("\n");

    free(mul);

    return (0);
}

