#include "main.h"

/**
 * print_triangle - function to print a triangle
 *
 *@size: the size of a triangle
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size - 1; j++)
				_putchar('#');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
