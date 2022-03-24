#include "main.h"
/**
* counting - count
* @a: variable
* Return: counter
*/
int counting(int a)
{
    int cnt = 0;

    while (a != 0)
    {
        cnt++;
        a &= (a - 1);
    }
    return (cnt);
}
/**
* flip_bits - a function that returns the number of bits you would need to flip to get from one number to another
* @n: n
* @m: m
* Return:  the number of bits you would need to flip to get from one number to another.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{		
	return (counting(n ^ m));
}
