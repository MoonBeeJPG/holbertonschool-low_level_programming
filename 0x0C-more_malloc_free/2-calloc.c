#include "main.h"
#include <stdlib.h>
/**
* _calloc -  a function that allocates memory for an array
* @nmemb: nmemb elements
* @size: size bytes
* Return: pointer from malloc
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *point;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	
	point = malloc(size * nmemb);
	if (!point)
		return (NULL);
	return (point);
}
