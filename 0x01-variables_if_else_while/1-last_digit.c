#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (Sucess)
*
*/
int main(void)
{
int n, LastDigit;
LastDigit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (LastDigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, LastDigit);
}
else if (LastDigit > 5)
{
printf("Last digit of %d is %d and is grather than 5 ", n, LastDigit);
}
else if (LastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LastDigit);
}
return (0);
}
