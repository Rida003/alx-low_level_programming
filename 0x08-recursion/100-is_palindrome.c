#include "main.h"
#include <stdio.h>

int find_pal(char *s, int f_i, int b_i);
int count_string(char *s);
/**
 * is_palindrome - checks if string is a palindrom
 * @s: string to check.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int count;

	count = 0;
	if (!(*s))
		return (1);

	count = count_string(s);
	return (find_pal(s, 0, count - 1));
}

/**
 * find_pal - helper for is_palindrom
 * @s: string to check
 * @f_i: front index.
 * @b_i: back index.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int find_pal(char *s, int f_i, int b_i)
{
	/*printf("%c - %c : %d - %d\n", s[f_i], s[b_i], f_i, b_i); */
	if (s[f_i] != s[b_i])
		return (0);
	if (s[f_i] == s[b_i] && f_i == b_i)
		return (1);
	else if (s[f_i] == s[b_i] && f_i > b_i)
		return (1);
	else
		return (find_pal(s, f_i + 1, b_i - 1));
}

/**
 * count_string - count the string.
 * @s: string to count.
 *
 * Return: Int value of the length.
 */
int count_string(char *s)
{
	if (*s)
		return (count_string((s + 1)) + 1);
	return (0);
}
