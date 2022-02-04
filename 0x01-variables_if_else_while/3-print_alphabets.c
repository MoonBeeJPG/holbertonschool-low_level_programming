#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Code
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (letter = 65; letter <= 90; letter++)
	{
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
