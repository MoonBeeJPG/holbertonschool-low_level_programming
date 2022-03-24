#include "main.h"
/**
* clear_bit - a function that sets the value of a bit to 0 at a given index
* @n: n
* @index: Is the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 0;
	int biti = ~(1 << index);
	int bititi = *n & biti;

	if (n == 0)
		return (-1);

	if (index > 31)
		return (-1);

	*n = bititi | (bit << index);

	return (1);
}
