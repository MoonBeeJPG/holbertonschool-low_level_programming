#include "search_algos.h"
/**
* linear_search - function that searches for a value in an array of integers
* using the Linear search algorithm
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: first index where value is located, if the value is not present in
* the array or if array is NULL, return -1
*/
int linear_search(int *array, size_t size, int value)
{

	unsigned long int i = 0;

	if (!array)
	{
		return	(-1);
	}
	else
	{
		while (i < size)
		{

			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return	(i);
			}
			i++;
		}
		return	(-1);
	}
}
