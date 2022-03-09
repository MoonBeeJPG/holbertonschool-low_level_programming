#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*/
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("nil\n");
	else 
		printf("Name: %s", (*d).name);
	if (!(*d).age)
		printf("nil");
	else
		printf("Age: %f", (*d).age);
	if ((*d).owner == NULL)
		printf("nil");
	else
		printf("Owner: %s", (*d).owner);
	if (!d)
		return;
}
