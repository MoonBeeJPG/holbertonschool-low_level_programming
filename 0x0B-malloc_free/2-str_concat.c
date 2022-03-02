#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _strlen - returns lenght
* @str: pointer
* Return: i
*/
int _strlen(char *str)
{
    int i = 0;

    while (*str != '\0')
    {
        i++;
        str++;
    }
    return (i);
}
/**
*
*
*
*/
char *str_concat(char *s1, char *s2)
{ 
	int a, b, c, i;
	char *conca;

	if (!s1 || !s2)
	{
		return (NULL);
	}

	a = _strlen(s1);
	b = _strlen(s2);
	c = a + b;
	
	conca = malloc(1 * (c + 1));

	if (!conca)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			conca[i] = s1[i];
		}
		for (i = 0; s2[i]; i++)
		{
			conca[i + a] = s2[i];
		}
	}
	return (conca);
}
