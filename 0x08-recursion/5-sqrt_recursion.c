#include "main.h"
/**
* _calculator - function that returns the natural square root of a number
* @n: a variable
* @x: other variable
* Return: natural square root of a number
*/
int _calculator(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);

		return (_calculator(n, x + 1));
}
/**
* _sqrt_recursion - a function that returns the natural square root of a number
* @n: a variable
* Return: natural square
*/
int _sqrt_recursion(int n)
{
	return (_calculator(0, n));
}
