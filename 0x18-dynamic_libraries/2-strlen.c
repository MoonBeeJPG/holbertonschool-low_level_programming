#include "main.h"
/**
* _strlen - A function that return the lenght of a string
* @s: string
* Return: lenght of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
