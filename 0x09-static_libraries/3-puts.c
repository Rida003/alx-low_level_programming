#include "main.h"
#include <unistd.h>
/**
 *_puts -  a string
 *@str: variable
 *Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	_putchar('\n');
}
