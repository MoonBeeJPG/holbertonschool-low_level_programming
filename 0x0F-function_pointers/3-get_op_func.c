#include "3-calc.h"

/**
* @get_op_func - contain the function that selects the correct 
* function to perform the operation asked
* @s: argument to the program
* Return: Null
*/
int (*get_op_func(char *s))(int, int)
{	
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    };
    int i;	
	while (ops[i] != NULL)
	{
		if (s == ops[i])
			return (ops[i].f)
	}
return (NULL);
}
