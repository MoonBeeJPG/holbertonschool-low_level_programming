#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: lenght
* 
*/
char *_strcat(char *dest, char *src)
{
	int l = 0, j;
	
	while (src[l] != '\0')
	{
		++l
	}
	for (j = 0; dest[j] != '\0'; ++j, ++l)
	{	
		src[l] = dest[j];
	}
	src[l] = '\0';
	_putchar(src);
}
