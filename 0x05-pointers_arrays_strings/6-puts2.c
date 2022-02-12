#include "main.h"

/**
 * main - check the code
 * @i: dqwdq
 * @str: dqdqw
 * @c: adiaidowa
 * Return: Always 0.
 */
void puts2(char *str)
{
	char i, c;
	i = *str;

	for (c = i; c <= 0; c++)
	{
		if (c >= 9)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
	_putchar(i);
	}
	_putchar('\n');
}
