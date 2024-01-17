#include "main.h"

/**
 *  _strcmp - function that compares two strings
 *
 * @s1: string one
 * @s2: string two
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	diff = (int)(*s1 - *s2);

	return (diff);
}
