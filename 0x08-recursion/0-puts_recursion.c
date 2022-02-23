#include "main.h"
/**
* _puts_recursion - a function that prints a string, followed by a new line
* @s: a pointer
*/
void _puts_recursion(char *s)
{ 
	if (s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
}
