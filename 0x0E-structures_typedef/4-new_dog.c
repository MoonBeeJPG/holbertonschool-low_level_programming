#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - a function that creates a new dog
* @name: Poppy
* @age: 4
* @owner: Bob
* Return: Doggie
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int Doggyn = 0, Doggyo = 0, i = 0, j = 0;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (!dog)
		return (0);

	while (name[i++])
		Doggyn++;
	while (owner[j++])
		Doggyo++;

	dog->name = malloc(Doggyn * sizeof(dog->name));

	if (dog->name == NULL)
	{
		free(dog);
		return (0);
	}

	for (i = 0; i < Doggyo; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	dog->owner = malloc(Doggyo * sizeof(dog->owner));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (0);
	}

	for (i = 0; i <= Doggyo; i++)
		dog->owner[i] = owner[i];

	return (0);

	return(dog);
}
