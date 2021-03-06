#include "main.h"
#include <stdlib.h>
/**
* array_range - a function that creates an array of integers
* @min: min
* @max: max
* Return: pointer
*/
int *array_range(int min, int max)
{
	int *point;
	int i, idx = 0;

	if (min > max)
		return (NULL);
	point = malloc((max - min + 1) * sizeof(int));
	if (!point)
		return (NULL);
	for (i = min; i <= max; i++)
		point[idx++] = i;
	return (point);
}
