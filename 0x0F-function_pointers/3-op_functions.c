#include "3-calc.h"

/**
 *op_add - calculats the sum of two numbers
 *@a: the first number
 *@b: the second number
 *Return: the sum of paramters
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - calculats the difference of two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the result of a times b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - calculats the division of two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the result of a divided by b
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
 *op_mod - calculats the modulus of two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the result of a modulus b
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
