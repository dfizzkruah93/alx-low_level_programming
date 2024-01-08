#include "main.h"

/**
 *  _strspn - function that gets the length of a prefix substring
 *
 * @s:  number of bytes of initial string
 * @accept: substring
 * Return: length of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)

			if (accept[j] == '\0')
				return (i);
	}
	return (0);
}
