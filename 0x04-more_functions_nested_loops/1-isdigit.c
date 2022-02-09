#include "main.h"
#include <stdio.h>
/**
* _isdigit - Write a function that checks for a digit 
* @c: variable for a digit
* Return: 1 if is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}		
