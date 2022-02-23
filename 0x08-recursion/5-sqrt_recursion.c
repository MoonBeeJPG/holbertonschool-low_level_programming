#include "main.h"
/**
* _calcu - a function that returns the natural square root of a number
* @n: a variable
* @x: another variable
* Return: natual square root
*/
int _calcu(int n, int x)
{
if (x * x == n)
return (x);

if (x * x > n)
return (-1);

return (_calcu(n, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root
 *@n: a variable
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{

return (_calcu(n, 0));
}
