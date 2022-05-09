#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1: 1
* @s2: 2
* Return: coparison
*/

int _strcmp(char *s1, char *s2)
{
	int idx;

	for (idx = 0; s1[idx] != '\0'; idx++)
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
	if (s2[idx] != '\0')
		return (s1[idx] - s2[idx]);
	return (0);
}
