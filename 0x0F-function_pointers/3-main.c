#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	else if ((argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	else
		printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
