#include "main.h"

/**
 *_strlen - lenght of a string
 *@s: variable
 *Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
	return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}
