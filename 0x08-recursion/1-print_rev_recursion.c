#include "main.h"
/**
* _print_rev_recursion - a function that prints a string in reverse
* @s: a pointer
*/
void _print_rev_recursion(char *s)
{
	int a = 0;

	if (*s == a)
    {
		putchar('\n');
		return;
    }
	else
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
