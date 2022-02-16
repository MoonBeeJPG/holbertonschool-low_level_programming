#include "main.h"

/**
* reverse_array - dadw
* @a: d
* @n: f
*/

void reverse_array(int *a, int n)
{
	int z, x, y;

	z = n - 1;

	for (x = 0; x < z; x++, z--)
	{
		y = a[z];
		a[z] = a[x];
		a[x] = y;
	}
}
