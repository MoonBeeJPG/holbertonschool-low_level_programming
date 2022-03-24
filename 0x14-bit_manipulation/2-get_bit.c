#include "main.h"
/**
* get_bit - A function that returns the value of a bit at a given index
* @n: n
* @index: Index is the index, starting from 0 of the bit you want to get
* Return: The value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = (n >> index) & 1;
	if (bit == 0)
		return (-1);
	if ((bit == 1) || (bit == 0))
		return (bit);
	else
		return (-1);
}
