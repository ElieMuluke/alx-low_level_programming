#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, ci = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++;

	array = malloc(sizeof(char) * (i + ci + 1));

	if (array == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}

	ci = 0;
	while (s2[ci] != '\0')
	{
		array[i] = s2[ci];
		i++, ci++;
	}
	array[i] = '\0';
	return (array);

}
