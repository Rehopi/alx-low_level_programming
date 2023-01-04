#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, your function must
 * return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, L = 0, R = size - 1, M, new_size = size;

	if (!array)
		return(-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		while (i < new_size)
		{
			printf("%d", array[i]);
			if (i != new_size - 1)
				printf(", ");
			else
				printf("\n");
			i++;
		}
		M = (L + R) / 2;
		if (array[M] < value)
			L = M + 1, i = L;
		else if (array[M] > value)
			R = M - 1, i = 0, new_size /= 2, new_size--;
		else
			return (M);
	}
	return (-1);
}
