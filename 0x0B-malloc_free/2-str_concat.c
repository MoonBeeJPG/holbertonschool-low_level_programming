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
* str_concat - a function that concatenates two strings
* @s1: first part of the string
* @s2: second part of the string
* Return: concatenation
*/
char *str_concat(char *s1, char *s2)
{
	int a, b, c, i;
	char *conca;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
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
