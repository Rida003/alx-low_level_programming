#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * array_range - The Function
 * @min:  The variable
 * @max:  The variable
 * Return: The Return value/void
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (!p)
		return (NULL);
	while (max >= min)
	{
		p[i] = min++;
		i++;
	}
	return (p);

}
