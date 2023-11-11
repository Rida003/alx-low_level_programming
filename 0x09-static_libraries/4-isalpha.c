#include "main.h"
#include <stdio.h>

/**
 * _isalpha - prints the alphabet in lowercase
 * @c: the variable
 * Return: void
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
