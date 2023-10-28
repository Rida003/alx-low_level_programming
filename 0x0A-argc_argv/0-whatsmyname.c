#include <stdio.h>

/**
 * main - Entry point.
 * @argc: size of argv
 * @argv: name of app + any other arguments.
 *
 * Return: Alway 0 (sucess)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
