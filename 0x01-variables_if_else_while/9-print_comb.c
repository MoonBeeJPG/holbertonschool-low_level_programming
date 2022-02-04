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
	int max = 9;
	int all;

	for (letter = 48 ; letter <= max ; letter++)
	{
		all = letter + 48;
		putchar(all);
	if (letter < max)
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
