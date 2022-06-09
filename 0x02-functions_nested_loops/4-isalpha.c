#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 *
 * @c: is the character to  check
 *
 * Return: 1 if @c is alphabetic otherwise 0
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
