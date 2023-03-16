#include <stdio.h>
#include "main.h"
/**
 * wildcmp - Entry Point
 * @s1: input
 * @s2: input
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the second string is '*', it can match anything, so we move s2 ahead */
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0')
			return (0);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* If the first character of both strings matches, we move ahead */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If the characters don't match and the second character of s2 is '*', we move ahead in s2 */
	if (*s2 == '*' && *(s2 + 1) != '\0')
		return (wildcmp(s1, s2 + 1));

	/* If none of the above cases apply, the strings are not identical */
	return (0);
}
