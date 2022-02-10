#include <stdio.h>

/**
 *main - asas
 *
 *
 * Return:asd
*/
int main(void)
{
	long int n = 612852475143;
	long int devisor;

	while (devisor < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}

		for (devisor = 3; devisor < (n / 2); devisor += 2)
		{
			if ((n % devisor) == 0)
				n /= devisor;
		}
	}

	printf("%ld\n", n);

	return (0);
}
