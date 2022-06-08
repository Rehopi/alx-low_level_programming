#include "_putchar.h"
/**
 * main - Entry point 
 *
 * Description: The program print _putchar 
 * followed by a new line 
 *
 * Return: Return 0 if there is no error in main program 
 */
int main(void)
{
  int n = 0;
  char _putchar[15] = "_putchar";

  while (_putchar[n] != '\0 )
    {
      _putchar (_putchar[n]);
      n++;
    }
  _putchar ('\n');

  return (0);
}

       
