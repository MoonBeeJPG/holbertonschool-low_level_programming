#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - a function that prints strings
* @separator: the string to be printed between the string
* @n: the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nlst;
	unsigned int i;
	char *string;

	va_start(nlst, n);
	for (i = 0; i < n;)
	{
		string = va_arg(nlst, char *);
		if (!string)
			printf("(nil)");
		else
			printf("%s", string);
		i++;
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nlst);
}
