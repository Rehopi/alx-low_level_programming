#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * wall is to first count to end, n is to count back
 * @s: string to print
 * Return: nothing
 */
void print_rev(char *s)
{
int wall = 0;

int i, n;

for (i = 0; s[i] != '\0'; i++)
{
wall++;
}

for (n = (fcounter - 1); n >= 0; n--)
{      
_putchar(s[n]);
}
  _putchar('\n');
}
