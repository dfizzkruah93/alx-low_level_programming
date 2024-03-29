#include "function_pointers.h"

/**
 *  int_index - function that searches for an integer
 *
 *  @array: array function
 *  @size: size of array
 *  @cmp: functions pointer
 *  Return:index of the matched characater or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
