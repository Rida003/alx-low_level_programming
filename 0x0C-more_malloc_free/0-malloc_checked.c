#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - The Function
 * @b:  The variable
 * Return: The Return value/void
 */

void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);
	if (!memory)
		exit(98);
	return (memory);

}
