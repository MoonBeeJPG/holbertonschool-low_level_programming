#include "main.h"
/**
* set_bit - a function that sets the value of a bit to 1 at a given index.
* @n: n
* @index: Is the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;
	unsigned int a = *n;

	bit = (a >> index) & 1;
	if (bit == 1)
		return (1);
	else
		return (-1);
}
