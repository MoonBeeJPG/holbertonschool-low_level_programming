#include "main.h"
/**
* print_binary - a function that prints the binary representation of a number
* @n: number to print
*/
void print_binary(unsigned long int n)
{
	unsigned long int count;
	int a = 0;

	count = n;

	while ((count >>= 1) > 0)
		a++;

	while (a >= 0)
	{
		if ((n >> a--) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
