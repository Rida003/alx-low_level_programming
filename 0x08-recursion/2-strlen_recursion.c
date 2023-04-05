#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to measure.
 *
 * Return: Length of the string as INT.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion((s + 1)));
	return (0);
}
