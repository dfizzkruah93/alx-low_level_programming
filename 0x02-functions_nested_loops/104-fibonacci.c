#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int next;
	int i;

	printf("%d, ", num1);
	for (i = 1; i < 98; i++)
	{
		printf("%d", num2);
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
