#include "function_pointers.h"
#include <unistd.h>

/**
 *int_index - initializes a struct
 *@array: the  value
 *@size: the value
 *@cmp: the value
 *Return: void
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
