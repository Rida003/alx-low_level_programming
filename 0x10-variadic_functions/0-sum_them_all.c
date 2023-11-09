#include "variadic_functions.h"

/**
 *sum_them_all - calc sum param
 *@n: num arguments
 *@...: inf number
 *Return: sum  parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum  = 0;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
