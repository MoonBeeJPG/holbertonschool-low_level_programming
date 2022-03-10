#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - a function that prints numbers
* @separator: the string to be printed between numbers
* @n: number of integers psased to the function
* Return: Null if separator is NULL
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nlst;
	unsigned int i;

	va_start(nlst, n);
	for (i = 0; i < n;)
	{
		printf("%d", va_arg(nlst, int));
		i++;
		
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	va_end(nlst);
	printf("\n");
}
