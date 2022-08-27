#include "search_algos.h"
/**
* binary_search - function that searches for a value in a sorted array of
* integers using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: first index where value is located, if the value is not present in
* the array or if array is NULL, return -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, sizee = size - 1;

	if (!array)
	{
		return (-1);
	}
	else
	{
		while (i <= sizee)
		{
			printf("Searching in array: ");
			Binary(array, sizee, i);
			j = (i + sizee) / 2;
			if (array[j] == value)
			{
				return (j);
			}
			else if (array[j] > value)
			{
				sizee = j - 1;
			}
			else
			{
				i = j + 1;
			}
		}
		return (-1);
	}
}

/**
* Binary -  do the Binary Search
*
* @array: an array
* @size: size
* @value: the value we looking for
*
* Return: The result
*/
void Binary(int *array, size_t size, size_t value)
{
	size_t i = 0;

	for (i = value; i <= size; i++)
	{
		if (i != size)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d\n", array[i]);
		}
	}
}
