#include "main.h"
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
char *bh = "_putchar";

while (*bh)
{
_putchar (*bh);
bh++;
}
_putchar('\n');

return (0);
}

       
