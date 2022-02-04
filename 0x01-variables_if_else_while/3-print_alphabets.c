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
	char ch;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (ch = 'A' ; ch <= 'Z' ; letter++)
		putchar(ch);
	putchar('\n');
	return (0);
}
