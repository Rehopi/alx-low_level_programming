#include "main.h"

/**
 * _pow - pows the two numbers
 * @base: unsigned int value input
 * @exp: unsigned int value input
 * Return: pow the two numbers
 */
unsigned int _pow(unsigned int base, unsigned int exp)
{
unsigned int i;

if (exp == 0)
return (1);
for (i = 1; i < exp; i++)
base += base;
return (base);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if:
 *  there is one or more chars in the string b that is not 0 or 1
 *  b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int exp = 0, base = 2, weight = 0, base10 = 0;

if (!b)
return (0);

for (; *(b + exp) != '\0'; exp++)
;
--exp;
while (*b)
{
if (*b == '0' || *b == '1')
{
weight = (*b - '0') * _pow(base, exp);
base10 += weight;
--exp;
}
else
return (0);
b++;
}
return (base10);
}
