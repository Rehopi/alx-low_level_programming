#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
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

for (n = (wall - 1); n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
