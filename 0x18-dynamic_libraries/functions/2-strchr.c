#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to locate
 * * @c: character in string
 * Return: string
 */

char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}

