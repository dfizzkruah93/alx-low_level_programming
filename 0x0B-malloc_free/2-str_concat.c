#include "main.h"

/**
 * str_concat - function that concatenates two string
 *
 * @s1: string one
 * @s2: string two
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *cont;
	int len1 = 0;
	int len2 = 0;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	cont = malloc(sizeof(char) * (len1 + len2) + 1);
	if (cont == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		cont[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		cont[len1 + i] = s2[i];
	return (cont);
}
