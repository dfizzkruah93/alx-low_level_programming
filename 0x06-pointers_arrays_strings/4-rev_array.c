#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: element of array
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int i, temp;

	for (i = 0; i < n && a[i] != '\0'; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
