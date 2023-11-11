#include "main.h"
#include <stdio.h>

/**
 * _islower- prints the alphabet in lowercase
 * @c: the variable
 * Return: void
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
