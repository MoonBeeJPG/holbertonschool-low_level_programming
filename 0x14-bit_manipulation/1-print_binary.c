#include "main.h"
#include <stdio.h>
/**
* print_binary - a function that prints the binary representation of a number
* @n: number to print
*/
void print_binary(unsigned long int n)
{
	int i = 7;
	
	for (i = 7; i >= 0; i--)
		_putchar(n & 1);
}
