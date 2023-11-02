#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strlen - The Function
 * @s:  The variable
 * Return: The Return value/void
 */

unsigned int  _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/* By EMOHAMEDD */

/**
 * string_nconcat - The Function
 * @s1:  The variable
 * @s2: The variable
 * @n: The variable
 * Return: The Return value/void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n >= _strlen(s2))
		size = _strlen(s1) + _strlen(s2) + 1;
	else
		size = _strlen(s1) + n + 1;
	p = malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
