#include "main.h"

/**
* _strchr - a function that locates a character in a string
* @s: a pointer
* @c: a variable
* Return: character c
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
return (0);
}
