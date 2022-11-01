#include "search_algos.h"

/**
 * @file 0-linear.c
 * @array: A pointer to the first element of the array to search
 * @size: The size of the array
 * @value: The value to search for
 * @author Benjamin Eruvieru (benjamineruvieru@gmail.com)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}