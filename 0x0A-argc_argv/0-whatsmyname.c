#include "main.h"
/**
* main -  a program that prints its name
* @argc: Number of arguments inside
* @argv: Value
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
