#include "main.h"
/**
* string_toupper -   function that changes all lowercase to uppercase
* @a: pointer
* Return: a
*/

char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 97 && a[x] <= 122)
			a[x] -= 32;
	}
	return (a);
}
