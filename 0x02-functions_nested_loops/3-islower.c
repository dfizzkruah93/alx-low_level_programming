#include "main.h"

/**
 * _islower - Return 1 is letter is lowercase, 0 otherwise
 *
 * @c: parameter to check for lowercase
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
