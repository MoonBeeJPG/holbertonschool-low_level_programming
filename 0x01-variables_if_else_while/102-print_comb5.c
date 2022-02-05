#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
int x, d;

for (x = 0; x <= 98; x++)
{
for (d = (x + 1); d <= 99; d++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (x < 98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
