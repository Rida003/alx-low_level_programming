#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to print in reverse.
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion((s + 1));
	_putchar(*s);
}
