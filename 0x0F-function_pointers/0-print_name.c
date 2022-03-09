#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - a function that prints a name
* @name: name to print
* @f: pointer to a function
* Return: Null
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
