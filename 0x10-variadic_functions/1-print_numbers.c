#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * Return: numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list(arg);
	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
