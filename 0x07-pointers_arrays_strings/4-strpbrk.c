#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string bytes
 * @accept: subtring
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{

	for (; *s != '\0'; s++)
	{
		const char *a = accept;

		for (; *a != '\0'; a++)


			if (*s == *a)
				return (s);
	}
	return (NULL);
}
