#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: integer either positive or negative
 * Return: 1 or 0
 */

int _abs(int n)

{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
