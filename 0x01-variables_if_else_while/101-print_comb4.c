#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, d, f;

for (x = '0'; x <= '7'; x++)
{
for (d = (x + 1); d <= '8'; d++)
{
for (f = (d + 1); f <= '9'; f++)
{
putchar(x);
putchar(d);
putchar(f);
if (x < '7')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
