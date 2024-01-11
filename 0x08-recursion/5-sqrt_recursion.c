#include "main.h"

/**
 *sqrt_root_check - check the square root
 *
 * @x: int
 * @y: int
 * Return: int
 */

int sqrt_root_check(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (sqrt_root_check(x + 1, y));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: natural number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (1);
	else
		return (sqrt_root_check(1, n));
}
