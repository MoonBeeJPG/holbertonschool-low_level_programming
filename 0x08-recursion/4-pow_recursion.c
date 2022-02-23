#include "main.h"
/**
* _pow_recursion - a function that returns the value of x raised to y
* @x: a variable to return
* @y: x raised to the power of y
* Return: value of x or -1 if its lower than 0 return -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
