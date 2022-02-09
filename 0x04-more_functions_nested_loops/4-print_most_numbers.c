#include "main.h"
/**
* print_most_numbers - a function that prints the numbers 0 to 9
* Return: numbers 0 to 9
*/
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		while (c != 50 && c != 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
