#include <stdlib.h>
#include <stdio.h>

int bin_search(int *array, size_t min, size_t max, int value);
void print_array(int *array, size_t start, size_t end);

/**
 * binary_search - search for an element using the binary search algorithm
 *
 * @array: haystack (int* array)
 * @size: size of the haystack (size_t)
 * @value: needle (int)
 *
 * Return: the index of first sucessful location else -1 (failure)
 */
int binary_search(int *array, size_t size, int value)
{

	if (!array || size == 0)
		return (-1);
	return (bin_search(array, 0, size - 1, value));
}


/**
 * bin_search - recursively search for an
 * element using the binary search algorithm
 *
 * @array: haystack (int* array)
 * @min: of left side
 * @max: index of right
 * @value: needle (int)
 *
 * Return: the index of first sucessful location else -1 (failure)
 */
int bin_search(int *array, size_t min, size_t max, int value)
{

	size_t mid;

	if (min > max)
		return (-1);
	if (min == 0)
		mid = max / 2;
	else
		mid =  min + ((max - min) / 2);

	print_array(array, min, max);
	if (value == array[mid])
		return ((int) mid);

	if (value < array[mid])
		return (bin_search(array, min, mid - 1, value));

	if (value > array[mid])
		return (bin_search(array, mid + 1, max, value));

	return (-1);

}

/**
 * print_array - prints array
 *
 * @array: haystack (int* array)
 * @start: of left side
 * @end: index of right
 *
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		printf("%d", array[start]);
		if (start < end)
			printf(", ");
		else
			printf("\n");
		start++;
	}
}
