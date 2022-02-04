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

	for (letter = ('a') ; letter <= ('z') ; letter++)

	if (letter != 100 && letter != 103)
	putchar(letter);
putchar('\n');
return (0);
}
