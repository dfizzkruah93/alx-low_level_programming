#include "main.h"

/**
 * _isalpha - check for char alphabet
 * @c: the char to be checked
 * Return: 1 if the char is lower or upper, 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
