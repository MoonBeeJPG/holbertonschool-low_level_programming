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
int n;
char ch;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (ch = 'a' ; ch < 'z' ; ch++)
		putchar(ch);
	return (0);
}
