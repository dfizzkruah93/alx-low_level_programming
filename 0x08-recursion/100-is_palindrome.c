#include "main.h"

/**
 *  _strlen_recursion - function that returns the length of a string
 *
 *  @s: string to determine
 *  Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * check_palindrome - check for palindrome
 *
 * @x: left index
 * @y: right index
 * @s: string
 * Return: palindrome
 */

int check_palindrome(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > y / 2)
		return (1);
	else 
		return (check_palindrome(s, x + 1, y - 1));
	else
		return (0);
}

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 *
 * @s: string
 * Return: palindrome
 */

int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
