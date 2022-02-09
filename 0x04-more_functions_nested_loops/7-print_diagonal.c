#include "main.h"

/**
* print_diagonal - a function that draws a diagonal line
* @n: variable
* Return: Always 0.
*/
void print_diagonal(int n)
{
int x, e;

if (n >= 0)
{
for (x = 0; x < n; x++)
{
for (e = 0; e < x; e++)
_putchar(' ');
_putchar('\\');
if (x == n - 1)
continue;

_putchar('\n');

}
}
_putchar('\n');
}
