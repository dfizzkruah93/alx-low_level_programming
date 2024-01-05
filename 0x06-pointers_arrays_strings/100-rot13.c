#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 *@s: string encoded
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;

	char *a = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *b = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] =  b[j];
				break;
			}
		}
	}
	return (s);
}

