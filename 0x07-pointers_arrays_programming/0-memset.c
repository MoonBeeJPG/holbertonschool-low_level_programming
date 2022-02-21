#include "main.h"

/**
* _memset -  a function that fills memory with a constant byte
* @s: pointer
* @b: constant
* @n: n times
* Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n;)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
