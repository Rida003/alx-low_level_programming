#include "main.h"

/**
 * _memset - a function
 * @s:  variable
 * @b: variable
 * @n: variable
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
