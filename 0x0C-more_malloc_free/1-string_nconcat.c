#include "main.h"
#include <stdlib.h>
/**
* _strlen - calculate the lenght
* @str: string
* Return: string
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
* string_nconcat - a function that concatenates two strings
* @s1: string one
* @s2: string two
* @n: a variable
* Return: result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rslt;
	unsigned int idx1, idx2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	rslt = malloc(_strlen(s1) + n + 1 * sizeof(*rslt));
	if (!rslt)
		return (NULL);
	for (idx1 = 0; s1[idx1]; idx1++)
		rslt[idx1] = s1[idx1];
	for (idx2 = 0; idx2 < n && s2[idx2]; idx2++)
		rslt[idx1 + idx2] = s2[idx2];
	rslt[idx1 + idx2] = '\0';
	return (rslt);
}
