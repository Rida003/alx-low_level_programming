#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to scan.
 * @index: bit to return.
 *
 * Return: Bit (0 | 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}
