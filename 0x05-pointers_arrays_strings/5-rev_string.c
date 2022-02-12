#include "main.h"
/**
 *rev_string - asd
 *@s: asd
 *
 */
void rev_string(char *s)
{
	int pos = 0;
	int i = 0;
	char sup;

	while (s[pos] != '\0')
	{
		pos++;
		sup++;
	}

	for (i = pos - 1; i >= pos / 2; i--)
	{
		sup = s[i];
		s[i] = s[pos - i - 1];
		s[pos - i - 1] = sup;
	}
}
