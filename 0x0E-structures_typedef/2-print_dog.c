#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: struct name
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);

	printf("Name: %s\n", d->name);
	printf("Owner: %s\n", d->owner);
}
