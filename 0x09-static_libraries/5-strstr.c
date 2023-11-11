#include "main.h"

/**
 *_strncmp - compares two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes to compare
 *Return: 0 if equal, 1 if s1 > s2 else -1
 */

int	_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;

	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/**
 *_strstr - locates a substring
 *@haystack: the string to search
 *@needle: the substring to look for in haystack
 *Return: returns a pointer to the neeldle else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int n = 0;

	if (!needle || !needle[0])
		return (haystack);
	while (needle[n])
		n++;
	while (haystack[i])
	{
		if (haystack[i] == needle[0] && _strncmp(haystack + i, needle, n) == 0)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
