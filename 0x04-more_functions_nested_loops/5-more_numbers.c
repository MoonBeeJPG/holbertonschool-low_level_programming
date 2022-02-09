#include "main.h"

/**
*more_numbers - asdf
*
* Return:ghjk
*/
void more_numbers(void)
{
int num, i;

for (i = 1; i <= 10; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
