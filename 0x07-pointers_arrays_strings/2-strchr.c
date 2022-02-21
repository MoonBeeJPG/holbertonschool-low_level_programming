#include "main.h"

/**
* _strchr - a function that locates a character in a string
* @s: a pointer
* @c: a variable
* Return: character c
*/
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	if (c == '\0')
		return (s);
return (0);
}
