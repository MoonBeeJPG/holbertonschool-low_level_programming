#include "stdio.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char letter;
void print_alphabet(void);

for (letter = 'a' ; letter <= 'z' ; letter++)
{
putchar(letter);
}
putchar('\n');
print_alphabet();
return (0);
}
