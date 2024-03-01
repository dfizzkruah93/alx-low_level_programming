#include "variadic_functions.h"
#include <stdio.h>

/**
 *  print_strings - function that prints strings, followed by a new line
 *
 *  @separator: string to be separated
 *  @n: number of arguments
 *  Return: strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(arg);
	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(arg, const char *);

		printf("%s", str);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
