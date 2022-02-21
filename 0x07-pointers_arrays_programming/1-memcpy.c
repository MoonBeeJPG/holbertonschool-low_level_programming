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
	
	while (dest[a])
		a++;
	while (b < n && (src[b] != '\0'))
	{
		dest[b] = src[b];
		b++;
	}
	for(; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
