#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - a function that prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list formatl;
	char *s;
	float f;
	int i, j, k;
	char c;

	va_start(formatl, format);
	s = av_arg(formatl, char *);
	f = av_arg(formatl, float);
	i = av_arg(formatl, int);
	c = av_arg(formatl, char);
	if (!s)
		printf("(nil)");
	while (j < formatl)
		j++;
	while (j < k)
		k++;
		
		printf("%s", s);
		printf("%f", f);
		printf("%d", i);
		printf("%c", c);
printf("\n");
va_end(formatl);
}
