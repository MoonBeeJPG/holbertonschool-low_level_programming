#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring
* @s: first pointer
* @accept: second pointer
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	for (a = 0; s[a] != '\0'; a++)
	{
		while (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				c++;
		break;
		}
	}
	return (s);
}
