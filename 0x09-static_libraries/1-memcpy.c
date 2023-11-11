#include "main.h"

/**
 * _memcpy - a function
 * @dest:  variable
 * @src: variable
 * @n: variable
 * Return: return s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
