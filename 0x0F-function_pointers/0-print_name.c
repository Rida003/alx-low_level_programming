#include "function_pointers.h"


/**
 *print_name - initializes a struct
 *@name: the  value
 *@f: the value
 *Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
