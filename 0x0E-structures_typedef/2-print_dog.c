#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - function that prints a struct dog
* @d: di
* Return: null
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if ((*d).name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age >= 0)
		printf("Age: %f\n", (*d).age);
	else
		printf("nil\n");
	if ((*d).owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
