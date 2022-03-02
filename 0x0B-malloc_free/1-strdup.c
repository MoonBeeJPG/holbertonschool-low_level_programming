#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _strdup - a function that returns a pointer to a newly allocated space in memory
* _strlen - to know the lenght of str
* @str: contains a string
* Return: Returns a pointer with the copy of str
*/
char *_strdup(char *str)
{
	char *str2;
	int i;
	
	if (*str == 0)
	{
		return (NULL);
	}
	str2 = malloc(strlen(str) + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}
	str2 = '\0';
	return (str2);
}
