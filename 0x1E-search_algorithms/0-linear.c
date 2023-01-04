#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, your function must
 * return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (!array)
		return (-1);

	for (index = 0; (unsigned int)index < size; index++)
	{
		if (array[index] == value)
		{
			printf("Value checked array[%d] = [%d]\n", index,
					array[index]);
			return (index);
	}
		printf("Value checked array[%d] = [%d]\n", index,
				array[index]);
	}
				
	return (-1);
}
