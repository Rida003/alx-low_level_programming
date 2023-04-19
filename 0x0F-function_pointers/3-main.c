#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

#define ARGV(X, S) (argv[X][0] == S)

/**
 * main - entry point, This fuction perform a calulaction base on 2 numbers and
 * the given operator.
 * @argc: number of agruments
 * @argv: the string value of the arguments.
 *
 * Return: 0 (on Sucess)
 */

int main(int argc, char *argv[])
{
	int a_int, b_int, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a_int = atoi(argv[1]);
	b_int = atoi(argv[3]);
	op = argv[2];
	if ((ARGV(2, '/') || ARGV(2, '%')) && b_int == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(op))(a_int, b_int);
	printf("%d\n", result);

	return (0);
}
