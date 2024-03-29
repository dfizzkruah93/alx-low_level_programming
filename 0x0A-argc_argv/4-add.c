#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (num1 = 1; num1 < argc; num1++)
		{
			for (num2 = 0; argv[num1][num2] != '\0'; num2++)
			{
				if (!(isdigit(argv[num1][num2])))
				{
					printf("Error\n");
					return (1);

				}
			}
			result = result + atoi(argv[num1]);
		}
		printf("%d\n", result);
	}
	return (0);
}
