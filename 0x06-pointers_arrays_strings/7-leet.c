#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *@a: pointer
 *Return: 1337
 */
char *leet(char *a)
{
	char min[6] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[6] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[6] = {'4', '3', '0', '7', '1', '\0'};
	int x;
	int z;

	for (x = 0; a[x] != '\0'; x++)
	{
		for (z = 0; z < 6; z++)
		{
			if (a[x] == min[z] || a[x] == mayus[z])
			{
				a[x] = num[z];
				break;
			}
		}
	}
return (a);
}
