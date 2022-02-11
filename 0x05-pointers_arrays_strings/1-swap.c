#include "main.h"
/**
* swap_int - swaps the values of two integers
* @b: b = 42
* @a: a = 98
*/
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
