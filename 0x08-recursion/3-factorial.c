#include "main.h"

/**
 * factorial - desciption
 * @n: number to find the factorial for.
 *
 * Return: Factorial (INT)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
