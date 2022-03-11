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
	int nlen = 0, olen = 0, i = 0, x = 0;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (name[i++])
		nlen++;
	while (owner[x++])
		olen++;

	dog->name = malloc(nlen * sizeof(dog->name));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= nlen; i++)
		dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(olen * sizeof(dog->owner));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= olen; i++)
		dog->owner[i] = owner[i];

	return (dog);
}	
}
