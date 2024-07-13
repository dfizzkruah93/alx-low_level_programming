#include "main.h"

/**
 *_isdigit - function that check for digits
 *
 *@c: character convert to integers
 *Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
