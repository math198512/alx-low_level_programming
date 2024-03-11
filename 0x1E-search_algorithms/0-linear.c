#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t ind;

	if (array == NULL)
		return (-1);
	for (ind = 0; ind < size; ind++)
	{
		printf("Value checked array[%ld] = [%d]\n", ind, array[ind]);
		if (array[ind] == value)
			return (ind);
	}
	return (-1);
}
