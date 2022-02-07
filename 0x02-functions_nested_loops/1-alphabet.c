#include "main.h"
#include "main.c"
/**
* main - Entry Point
*
* Return: Always 0 (Sucess)
*/
void print_alphabet(void)
{
int n;

for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');
}
