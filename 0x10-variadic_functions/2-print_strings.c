#include "variadic_functions.h"

/**
 *print_all - printd string by \n
 *@format: list type
 *@...: arguments
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;
	char *separator = "";


	va_start(ap, format);
	if  (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, int));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", "';
			i++;
		}
	}
	putstr("\n");
	va_end(ap);
}
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
