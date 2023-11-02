#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * _calloc - The Function
 * @nmemb:  The variable
 * @size:  The variable
 * Return: The Return value/void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
