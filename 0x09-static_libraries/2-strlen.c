#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 *
 *@s: string length
 *Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count = count + 1;
	return (count);
}
