#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array
 *                 of integers using binary_search.
 * @array: Pointer to the first element of an array
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index where the value is located in the array
 *
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t mid, i, low = 0, high = size - 1;

	while (high - low > 0)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = low + (high - low) / 2;
		if (value == array[mid])

			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
