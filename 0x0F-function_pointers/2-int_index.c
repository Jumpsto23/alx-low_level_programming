#include <stddef.h>
#include "function_pointers.h"

/**
 * in_index - return index of first element
 *
 * @array: array
 * @size: size of elements
 * @cmp: pointer to function
 *
 * Return: On success 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
