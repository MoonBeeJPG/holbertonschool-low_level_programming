#include "main.h"
/**
* print_binary - a function that prints the binary representation of a number
* @n: number to print
*/
void print_binary(unsigned long int n)
{
	if (n)
		print_binary(n);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
	n >>= 1;
}
