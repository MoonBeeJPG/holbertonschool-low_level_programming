#include "main.h"
/**
* cap_string - function that capitalizes all words of a string
* @cap: pointer
* Return: cap
*/

char *cap_string(char *cap)
{
	char string[15] = {32, 44, 46, 59, 33, 63, '"', 40, 41, 123, 125,
	'\n', '\t', '\0'};
	int a;
	int b;

	for (a = 0; cap[a] != '\0'; a++)
	{
		for (b = 0; string[b] != '\0'; b++)
		{
			if (cap[0] > 96 && cap[0] < 123)
				cap[0] -= 32;

			else if (cap[a] == string[b])
			{
				if (cap[a + 1] > 96 && cap[a + 1] < 123)
				{
					cap[a + 1] = cap[a + 1] - 32;
				}
			}
		}
	}
return (cap);
}
