#include "main.h"
/**
* times_table - timetime
* @tt
* Return: 9 tables
*/
void times_table(void)
{
	int a, b, res;
		a = 0;
		b = 0;
		res = 0;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			res = b * a;
			if (b != 0)
			{
				_putchar(' ');

				if (res < 10)
				{
					_putchar(' ');
				}
			}
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
			if (b == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
	}
}
