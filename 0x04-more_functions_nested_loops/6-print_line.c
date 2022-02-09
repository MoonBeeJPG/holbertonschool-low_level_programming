#include "main.h"

/**
* print_line - a function that draws a straight line
* @n: number
* Return: Always 0.
*/
void print_line(int n)
{
int count;

if (n >= 1)
{
for (count = 0; count < n; count++)
{
_putchar('_');
}
}
_putchar('\n');
}
