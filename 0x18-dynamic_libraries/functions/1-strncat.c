#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 *
 *@dest: destination string
 *@src: source string
 *@n: number of string.
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
