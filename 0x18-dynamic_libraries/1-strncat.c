#include "main.h"

/**
* _strncat - dko
* @dest: sasa
* @src: lak
* @n: n
* Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
