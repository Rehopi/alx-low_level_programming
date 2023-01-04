#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an array of integers
 * using the Binary search algorithm;
 * @array: a pointer to the 1st element;
 * @size: the number of elements in the array;
 * @value: the value to search for
 * Return: the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int index = 0;
	int middle = 0;

	if (!array)
		return(-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		
		for (index = left; index <= right - 1; index++)
		{
			printf("%i, ", array[index]);
		}
		printf("%i\n", array[index]);

		middle = (left + right) / 2;

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
			return (middle);
	}
	return (-1);
}
