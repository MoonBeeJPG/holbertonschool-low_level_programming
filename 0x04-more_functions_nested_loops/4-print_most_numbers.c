#include "main.h"
/**
* print_most_numbers - a function that prints the numbers 0 to 9
* Return: numbers 0 to 9
*/
void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		while (c != 54 && c != 50)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
