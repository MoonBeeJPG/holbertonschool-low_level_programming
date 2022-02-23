#include "main.h"
/**
* factorial - a function that returns the factorial of a given number
* @n: a variable
* Return: the factoril of a given number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
