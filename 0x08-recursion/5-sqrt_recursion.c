#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (helper(n, 1));
}
