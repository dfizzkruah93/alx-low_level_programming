#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: integer to print
 * *Return: void;
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = n;

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
