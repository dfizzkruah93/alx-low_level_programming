#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to upper case
 * @str: the input string to be modifies
 * Return: str
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p  >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
		p++;
	}
	return (str);
}
