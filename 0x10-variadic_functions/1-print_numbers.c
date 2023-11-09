#include "variadic_functions.h"

/**
 *print_numbers - printd num by \n
 *@separator: the string
 *@n: inf number
 *@...: inf number
 *Return: sum  parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
