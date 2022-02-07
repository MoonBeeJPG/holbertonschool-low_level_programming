#include "main.h"
/**
* print_last_digit - digitititit
* @lst: stststst
* Return: Last digit
*/
int print_last_digit(int lst)
{ lst = lst % 10;
if (lst < 0)
{
lst = (lst * -1);
}
_putchar (lst + '0');
return (lst);
}
