#include "main.h"

/**
 * str_check - check for string
 *
 * @s1: string one
 * @s2: string two
 * @i: string index one
 * @j: string index two
 * Return: string
 */

int str_check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_check(s1, s2, i + 1, j) || str_check(s1, s2, i, j + 1));

	return (0);
}

/**
* wildcmp - check for identical string
*
* @s1: base address one
* @s2: base address two
* Return: 1 if identical
*/

int wildcmp(char *s1, char *s2)
{
	return (str_check(s1, s2, 0, 0));
}
