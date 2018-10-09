#include "search_algos.h"

/**
 * print_array - prints array
 * @array: array to print
 * @start: start of print range
 * @end: end of print range
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}


/**
 * binary_search - returns the index of a value
 * @array: array to search
 * @size: size of array
 * @value: value to locate
 *
 * Return: The index of the value, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0, start = 0, end = size - 1;
	int *cursor;

	if (array == NULL)
		return (-1);

	cursor = array;

	while (start <= end)
	{
		printf("mid %lu, start %lu, end %lu\n", mid, start, end);
		mid = (end + start) / 2;
		print_array(array, start, end);
		if (cursor[mid] == value)
			return (mid);

		if (cursor[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid;
		}
	}
	return (-1);
}
