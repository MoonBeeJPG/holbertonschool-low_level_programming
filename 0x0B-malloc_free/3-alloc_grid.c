#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - function that returns a pointer to a 2 dimensional array
* @widht: widht of arrays
* @height: height of array
* Return: a pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (!ptr)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (a = 0; a < height; a++)
				free(ptr[a]);
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}

	return (ptr);
}
