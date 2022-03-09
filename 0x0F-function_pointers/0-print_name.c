#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - a function that prints a name
* @name: name to print
* @f: pointer to a function
* @func: pointer to the function
*/
void print_name(char *name, void (*f)(char *func))
{
	*f = name;	
}
