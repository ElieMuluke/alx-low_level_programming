#include "main.h"

/**
 * leet - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rot13(char *str) {
    char *result = malloc(strlen(str) + 1);
    if (!result) {
        return NULL;
    }

    int i, j;
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            j = (str[i] - 'a' + 13) % 26;
            result[i] = 'a' + j;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            j = (str[i] - 'A' + 13) % 26;
            result[i] = 'A' + j;
        } else {
            result[i] = str[i];
        }
    }

    result[i] = '\0';
    return result;
}
