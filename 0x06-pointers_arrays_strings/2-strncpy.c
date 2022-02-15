#include "main.h"

/**
* _strncpy - function that copies a string
* @dest: a
* @src: b
* @n: c
* Return: s1
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && (src[b] != '\0'))
	{
		dest[b] = src[b];
		b++;
	}
	for (; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
