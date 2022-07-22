#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: input
 * @index: input
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit = 0;

if (n > 0 && index < 64)
{
bit = (n >> index) & 1;
return (bit);
}
else
{
return (-1);
}
}
