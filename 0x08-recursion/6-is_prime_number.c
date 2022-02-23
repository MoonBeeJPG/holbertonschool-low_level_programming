#include "main.h"
/**
* _calcu - return 1 if the input integer is a prime number
* @n: a variable
* @x: another variable
* Return: 1 if the input is a prime, 0 otherwise
*/
int _calcu(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (x == n)
	{
		return (1);
	}
	else
	{
		if (n % x == 0 && x != 1 && x != n)
		{
			return (0);
		}
	}
	return (_calcu(n, x + 1));
	return (0);
}
/**
* is_prime_number - return 1 if the input integer is a prime number
* @n: a variable
* Return: function
*/
int is_prime_number(int n)
{
	return (_calcu(n, 1));
}
