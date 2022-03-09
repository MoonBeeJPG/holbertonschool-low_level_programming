#include "function_pointers.h"

/**
* int_indez - a function that searches for an integer
* @array: an array
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
* Return: Null
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
