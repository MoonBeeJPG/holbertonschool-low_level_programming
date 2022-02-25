#include "main.h"
#include <stdio.h>

/**
 *_strstr - a function that locates a substring
 *@haystack: string 1
 *@needle: string 2
 *Return: leme see
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int len = 0;

	while (needle[len] != '\0')
		len++;

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
				break;
		}
		if (index != len)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
