#include "main.h"
/**
* rot13 - a function that encodes a string using rot13
* @a: pointer
* Return: a
*/

char *rot13(char *a)
{
	char abc[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, z;

	for (x = 0; a[x] != '\0'; x++)
	{
		for (z = 0; z <= 53; z++)
		{
			if (a[x] == abc[z])
			{
				a[x] = rot[z];
				break;
			}
		}
	}
return (a);
}
