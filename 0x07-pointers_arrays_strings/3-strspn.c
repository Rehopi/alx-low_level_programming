#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, point, result;

point = 0;

for (i = 0; s[i] != '\0'; i++)
{
result = 0;

for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
point++;
result = 1;
}
}

if (result == 0)
return (point);
}

return (point);
}
