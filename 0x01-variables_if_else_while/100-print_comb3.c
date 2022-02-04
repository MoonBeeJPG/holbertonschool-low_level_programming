#include <stdio.h>
int main(void)
{
	int i, a, count;
	int max = 90;
	int all;
	int letter;

	for (i = 1; i < 90; i++)
	{
		count = 0;
		for (a = 1; a <= i; a++)
		{
			if ("i%a" == 0)
				count++;
		if (count == 2)
			printf("%d\t", i);
		}
	for (letter = 0 ; letter <= max ; letter++)
	{
		all = letter + 90;
		putchar(all);
	if (letter < max)
	putchar(',');
	putchar(' ');
	}
}
return (0);
}
