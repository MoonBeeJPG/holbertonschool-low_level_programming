#include "main.h"

/**
 *_strpbrk - main
 *@s: string to be scanned
 *@accept: string cointaing the characters to match
 *Return: null if not match, a pointer to first occurence if match
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
				return ('\0');
}
