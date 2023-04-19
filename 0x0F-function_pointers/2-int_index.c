#include "function_pointers.h"

/**
 * int_index - iterate over an array and executes passed functions on the
 * elements.
 * @array: array of intergers.
 * @size: size of array.
 * @cmp: is the fuction to execute on the array.
 *
 * Return: Index (int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	while (size--)
	{
		if (cmp(array[index - size]))
			return (index - size);
	}

	return (-1);
}
