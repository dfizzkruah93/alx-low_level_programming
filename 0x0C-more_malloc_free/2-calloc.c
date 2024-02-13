#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of array element
 * @size: size of array
 * Return: pointer to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
