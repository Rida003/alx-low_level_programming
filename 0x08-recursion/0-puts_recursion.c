#include "main.h"

/**
 *  * _puts_recursion - prints a string follow by a new line. recursively.
 *   * @s: string in which to print.
 *    *
 *     * Return: Nothing
 *      */
void _puts_recursion(char *s)
{
		if (!*s)
				{
							_putchar('\n');
									return;
										}
			_putchar(*s);
				_puts_recursion((s + 1));
}
