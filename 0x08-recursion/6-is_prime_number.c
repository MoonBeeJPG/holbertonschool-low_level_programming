#include "main.h"
/**
* _calcu - return 1 if the input integer is a prime number
* @n: a variable
* @x: another variable
* Return: 1 if the input is a prime, 0 otherwise
*/
int _calcu(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (_calcu(n, n - 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime number
* @n: a variable
* Return: 1 if the input is a prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n < 1)
		return (0);

	return (_calcu(n, n - 1));
}
