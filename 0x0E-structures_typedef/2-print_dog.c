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
		printf("nil");
	if (!(*d).age)
		printf("nil");
	if ((*d).owner == NULL)
		printf("nil");
	else if (!d)
		printf(" ");
}
