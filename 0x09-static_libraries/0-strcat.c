#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: lenght
* @src: init
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int l, c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (l = 0; src[l] != '\0'; l++, c++)
	{
		dest[c] = src[l];
	}
	dest[c] = '\0';

	return (dest);
}
