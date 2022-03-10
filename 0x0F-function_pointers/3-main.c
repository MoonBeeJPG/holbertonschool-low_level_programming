#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - a program that performs simple operations.
* @argc: elements
* @argv: bytes
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (!(op) || (argv[2][1] != '0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
		(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = op(num1, num2);

	printf("%d\n", res);

	return (0);
}
