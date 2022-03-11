#include <stdio.h>
#include "variadic_functions.h"
/**
* _strlen  -  returns the length of a string
* @s: string
* Return: len
*/
int _strlen(char *s)
{
	size_t strlen(const char *s);
	return (strlen(s));
}
/**
* print_all - a function that prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list list;
	size_t i = 0;
	int j = 0;
	char *separator = "";

	typef typel[] = {
			{"c", print_char},
			{"i", print_integer},
			{"f", print_float},
			{"s", print_charchar},
			{"/0", NULL}
	};

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (typel[j].argument != NULL)
		{
			if (*typel[j].argument == format[i])
			{
				printf("%s", separator);
				typel[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
* print_char - print a char
* @list: list
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
* print_integer - print integer
* @list: list
*/
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
* print_float - print a float
* @list: list
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
* print_charchar - print a string
* @list: list
*/
void print_charchar(va_list list)
{
	char *va;

	va = va_arg(list, char *);
	if (va == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va);
}

