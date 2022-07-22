#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to convert
 * @index: index of the bit to set
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 64)
		return (-1);
	mask = 1 << index;
	*n &= ~mask;
	return (1);
}
