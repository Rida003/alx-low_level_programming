#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
