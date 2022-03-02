#include <stdlib.h>
#include "main.h"
/**
* create_array - a function that creates an array of chars
* @size: size
* @c: variable
* Return: Null if its null
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *pt;

	if (size == 0)
	{
		return (NULL);
	}
	pt = malloc(size * sizeof(*pt));
	else if (pt == NULL)
	{
		return (NULL);
	}
	else
	for (a = 0; a < size; a++)
	{
		pt[a] = c;
	}
	return (pt);
}
