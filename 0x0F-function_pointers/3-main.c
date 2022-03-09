#include "3-calc.h"
/**
*
*
*
*/
int main(int calc, int num1, int operator, int num2)
{
	if (!num1 || !num2)
		printf("Error\n");
		exit(98);
	if (!operator)
		printf("Error\n");
		exit(99);
	if (num1 / 0 || num2 / 0)
		printf("Error\n");
		exit(100);
	if (num1 % 0 || num2 % 0)
		printf("Error\n");
		exit(100);:x
