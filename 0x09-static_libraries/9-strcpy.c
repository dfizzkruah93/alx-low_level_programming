#include "main.h"

/**
 *_strcpy - copies the string pointed to by src
 *
 *@dest: destination of the string
 *@src: source of the string
 *Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
