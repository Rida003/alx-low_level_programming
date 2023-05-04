#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 (Big Endian), 1 (Little Endian)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}

