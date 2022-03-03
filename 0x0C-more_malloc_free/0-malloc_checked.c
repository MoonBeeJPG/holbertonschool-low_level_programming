#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - a function that allocates memory using malloc
* @b: string
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}
	else
	return (ptr);
}
