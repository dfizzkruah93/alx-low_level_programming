#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the termina
 *
 *@n: number of lines
 *Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)

				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
