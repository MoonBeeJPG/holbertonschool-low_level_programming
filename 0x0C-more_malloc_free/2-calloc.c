#include <string.h>
#include "main.h"
#include <stdlib.h>
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

/**
* _calloc -  a function that allocates memory for an array
* @nmemb: nmemb elements
* @size: size bytes
* Return: pointer from malloc
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(size * nmemb);
	if (point)
		_memset(point, 0, size * nmemb);
	return (point);
}
