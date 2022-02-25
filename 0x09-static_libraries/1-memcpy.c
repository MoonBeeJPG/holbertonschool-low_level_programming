#include "main.h"
/**
* _memcpy - a function that copies memory area
* @dest: a pointer
* @src: a second pointer
* @n: a variable
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a, b;

	while (src[a])
		a++;
	for (b = 0; src[b] && b < n; b++)
	{
		dest[b] = src[b];
	}
	for (b = a; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
