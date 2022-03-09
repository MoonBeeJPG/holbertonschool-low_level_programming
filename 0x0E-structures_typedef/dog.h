#ifndef TYPES_H
#define TYPES_H
#include <stdio.h>

/**
* struct dog - Doggie!
* @name: Poppy
* @age: 3.5
* @owner: Bob
*/
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog;
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
