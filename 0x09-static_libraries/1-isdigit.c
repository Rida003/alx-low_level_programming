#include "main.h"
#include <stdio.h>

/**
 * _isdigit - prints the alphabet in lowercase
 * @c: the variable
 * Return: 1 || 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
