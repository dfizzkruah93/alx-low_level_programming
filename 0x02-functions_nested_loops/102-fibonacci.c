#include <stdio.h>

/**
 * main - function to print the fibonacci number of 50
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int next_num;
	int i;

	printf("lu, ", num1);

	for (i = 1; i < 50; i++)
	{
		printf("lu", num2);
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
