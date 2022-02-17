#include "main.h"
/**
* print_number -  a function that prints an integer
* @n: int
*/

void print_number(int n)
{
	unsigned int decim, digit, natu = n;
	double flot = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			natu = n * -1;
			_putchar('-');
		}
		while (flot <= natu)
			flot *= 10;
		decim = flot / 10;

		while (decim >= 1)
		{
			digit = natu / decim;
			_putchar(digit + '0');
			natu = (natu - (decim * digit));
			decim /= 10;
		}
	}
}

