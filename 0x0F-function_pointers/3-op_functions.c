#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Adds up two integers
* @a: The first number
* @b: The second number
* Return: The sum of two above numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Substracts two integers
* @a: The first number
* @b: The second number
* Return: The difference between two above numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiples two integers
* @a: The first number
* @b: The second number
* Return: The multiplication of two above numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Division of two integers
* @a: The first number
* @b: The second number
* Return: The Division of two above numbers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Modolus of two integers
* @a: The first number
* @b: The second number
* Return: The Remindar two above numbers
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

























