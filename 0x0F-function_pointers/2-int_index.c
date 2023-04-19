#include "main.h"
#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
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
