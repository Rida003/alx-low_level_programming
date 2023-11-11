#include "main.h"

/**
 * _strncat - a function that print n elem of array
 * @dest: pointer variable
 * @src: variable
 * @n: variable
 * Return: void return nothing
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
