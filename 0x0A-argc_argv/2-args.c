#include <stdio.h>

/**
 * main - Entry point, prints the arguments plus the application name.
 * @argc: count.
 * @argv: string with the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}