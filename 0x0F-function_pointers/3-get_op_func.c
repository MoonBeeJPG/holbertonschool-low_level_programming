#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - contain the function that selects the correct
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

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
