#include "function_pointers.h"
#include <unistd.h>

/**
 *array_iterator - initializes a struct
 *@size: the  value
 *@array: array
 *@action: the value
 *Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
