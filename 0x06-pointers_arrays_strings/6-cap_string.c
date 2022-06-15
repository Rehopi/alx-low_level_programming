#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to change
 * Return: string changed
 */
char *cap_string(char *);
{
int i = 0, b = 0, tmp = 0;
char sep[] = {'\n', ' ', '\t', ',', ';', '"',
'(', ')', '{', '}', '?', '!', '.'};

while (str[i] != '\0')
{
tmp = 0;
for (b = 0; sep[b] != '\0' && i != 0; b++)
{
if (str[i - 1] == sep[b])
{
tmp = 1;
break;
}
}
if (i == 0 || tmp == 1)
{
if (str[i] > 96 && str[i] < 123)
str[i] -= 32;
}
i++;
}

return (str);
}
