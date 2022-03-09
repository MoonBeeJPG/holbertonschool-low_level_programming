#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - program that performs addition
* @a: num1
* @b: num2
* Return: Addition
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - program that performs subtraction
* @a: num1
* @b: num2
* Return: Subtraction
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - program that performs multiplication
* @a: num1
* @b: num2
* Return: Multiplication
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - program that performs division
* @a: num1
* @b: num2
* Return: Division
*/
int op_div(int a, int b)
{
if (b == '0')
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - program that performs modulo
* @a: num1
* @b: num2
* Return: Modulo
*/
int op_mod(int a, int b)
if (b == '0')
{
printf("Error\n");
exit(100);
}
return (a % b);
}
