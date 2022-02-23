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

	if (x * x > n)
		return (-1);

	return (_calculator(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: a variable
 * Return: a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_calculator(n, 0));
}
