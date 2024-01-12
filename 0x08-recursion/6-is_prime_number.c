#include "main.h"

/**
 * check_prime - check for prime number
 *
 * @x: int
 * @y: int
 * Return: int
 */

int check_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check_prime(x + 1, y));

}

/**
 * is_prime_number - prime number determine
 *
 * @n: prime number
 * Return: number
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (check_prime(2, n));
}
