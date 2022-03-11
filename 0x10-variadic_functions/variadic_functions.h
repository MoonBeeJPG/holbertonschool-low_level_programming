#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list list);
void print_integer(va_list list);
void print_float(va_list list);
void print_charchar(va_list list);

/**
* struct type - a function that prints anything
* @argument: list
* @f: pointer
* Return: anything
*/

typedef struct type
{
char *argument;
void (*f)(va_list list);
} typef;
#endif
