#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: string to be printed
 *Return: string
 */

void puts_half(char *str)
{
	int i, n;
	int count = 0;

	for (i = 0; str[1] != '\0'; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
