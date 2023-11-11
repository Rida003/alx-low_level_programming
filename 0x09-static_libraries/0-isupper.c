#include "main.h"
#include <stdio.h>

/**
 * _isupper - prints the alphabet in lowercase
 * @c: the variable
 * Return: 1 || 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
