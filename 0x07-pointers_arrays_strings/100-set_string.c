#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to a pointer string
 * @to: string to what the pointer is pointing to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
