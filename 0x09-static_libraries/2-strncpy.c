#include "main.h"

/**
 * _strncpy - a function that print n elem of array
 * @dest: pointer variable
 * @src: variable
 * @n: variable
 * Return: void return nothing
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (src[j])
		j++;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (j < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
