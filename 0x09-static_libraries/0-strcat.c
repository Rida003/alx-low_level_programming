#include <stdio.h>

/**
 * _strcat - a function that print n elem of array
 * @dest: pointer variable
 * @src: variable
 * Return: void return nothing
 */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
