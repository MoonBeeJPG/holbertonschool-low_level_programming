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
	char letter;
	char upcase;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	for (upcase = 'A'; upcase <= 'Z'; letter++)
		putchar(upcase);
	putchar('\n');
	return (0);
}
