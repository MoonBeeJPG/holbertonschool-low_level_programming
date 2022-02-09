#include "main.h"

/**
 *print_diagonal - yuk
 *@n: sdfx
 *
 * Return:fghj
*/
void print_diagonal(int n)
{
	int x, e;

	if (n >= 0)
	{
		for (x = 0; x < n; x++)
		{
			for (e = 0; e < x; e++)
				_putchar(' ');
			_putchar('\\');
			if (x == n - 1)
				continue;

			_putchar('\n');

		}
	}
	_putchar('\n');
}
