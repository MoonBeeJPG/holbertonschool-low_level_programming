#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*
*
*
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
* _strdup - a function that returns a pointer to a llocated space in memory
* @str: contains a string
* Return: Returns a pointer with the copy of str
*/
char *_strdup(char *str)
{
	char *str2;
	int i;

	if (!str)
	{
		return (NULL);
	}

	str2 = malloc(_strlen(str) + 1);
	
	if (str2 == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			str2[i] = str[i];
		}
		str2[i] = '\0';
	}
	return (str2);
}
