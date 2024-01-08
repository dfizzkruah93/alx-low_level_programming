#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to search within
 * @needle: substring to find
 * Return: pointer to the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
			return (haystack + i);
	}
	return (NULL);
}
