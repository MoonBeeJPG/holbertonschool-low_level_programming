#include "main.h"
#include <stdlib.h>
/**
* main - a program that multiplies two numbers
* @argc: counter
* @argv: value
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b = 1;

	if (argc > 2)
	{
		for (a = 0; a < argc; a++)
		{
			b = b * atoi(argv[a]);
			printf("%d\n", b);
		}
	}
	printf("Error\n");
	return (1);
}
