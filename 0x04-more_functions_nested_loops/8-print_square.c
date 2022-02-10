#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int lrg, anch;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (lrg = 0; lrg < size; lrg++)
		{
			for (anch = 0; anch < size; anch++)
				_putchar ('#');
			_putchar('\n');
		}
	}
}
