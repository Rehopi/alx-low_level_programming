#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i, bh;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (bh = 0; bh < n; bh++)
{
dest[i + bh] = src[bh]
if (src[bh] == '\0')
bh = n;
}

return (dest);
}
