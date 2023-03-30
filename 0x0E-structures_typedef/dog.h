#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a new type of data representing a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/* Helper function prototypes */
int _strlen(char *str);
char *_strcpy(char *dest, char *src);

#endif

