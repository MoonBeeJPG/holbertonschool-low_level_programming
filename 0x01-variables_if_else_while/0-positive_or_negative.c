#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry Point
*
* Return: Almays 0 (Sucess)
*
*/

int main(void)
{
		int n;

			srand(time(0));
			  n = rand() - RAND_MAX / 2;
					while (n = 0)
					{
						printf("$n is zero");
					}
					if (n > 0)
					{
						printf("$n is positive");
						}
					else if (n < 0)
					{
						printf("$n is negative");
					}

					return (0);
}
