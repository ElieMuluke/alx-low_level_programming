#include "main.h"

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    while (*s != '\0')
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            // Check for integer overflow before adding the next digit
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
            {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            result = result * 10 + (*s - '0');
        }
        else if (result != 0)
        {
            break;
        }

        s++;
    }

    return result * sign;
}
