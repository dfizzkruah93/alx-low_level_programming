#include "main.h"

/**
 *_isupper - function to check for uppercase characters
 *
 * @c: charcter as uppercase
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
