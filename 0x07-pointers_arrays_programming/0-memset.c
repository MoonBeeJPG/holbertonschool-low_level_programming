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
	for (n = 0; s[n] <= b; n++)
		s[n] = b;
	return (s);
}
