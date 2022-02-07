#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
void print_alphabet(void);
{
char letter;

letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
}
int main(void)
{
putchar('\n');
print_alphabet();
return (0);
}
