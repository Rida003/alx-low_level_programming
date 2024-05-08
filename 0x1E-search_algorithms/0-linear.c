#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - linear cearch algorithm
 *
 * @array: pointer to an array of integers
 * @size: size for the array
 * @value: value to search for
 *
 * Return: the index of the first match else -1 (Failure)
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (!array)
		return (-1);

	idx = 0;
	while (idx < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}

	return (-1);
}
