#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
char rev = s[0];
int wall = 0;
int i;

while (s[wall] != '\0')
wall++;

for (i = 0; i < wall; i++)
{
wall--;
rev = s[i];
s[i] = s[wall];
s[wall] = rev
} 
}
