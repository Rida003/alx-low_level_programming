#include "main.h"

/**
* print_name - print a name.
* @name:  string to print.
* @f: function to use.
*
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
return;
f(name);
}
