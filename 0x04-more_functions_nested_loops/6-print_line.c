#include "main.h"

/**
 * print_line -  function that draw a straight line in the terminal
 *
 *@n: number of time time line is printed
 *Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
