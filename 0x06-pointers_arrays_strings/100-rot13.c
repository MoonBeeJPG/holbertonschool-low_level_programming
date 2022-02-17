#include "main.h"
/**
* rot13 - a function that encodes a string using rot13
* @a: pointer
* Return: a
*/

char *rot13(char *a)
{
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\0";
	char rot[] = "NOPQRSTUVWXYZnopqrstuvwxyz\0";
	int x, z;

	for (x = 0; a[x] != '\0'; x++)
	{
		for (z = 0; abc[z] != '\0'; z++)
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
