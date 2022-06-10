#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long num = 612852475143;
unsigned long factor = 2;

while (num)
{
if (num / factor > 0 && num % factor == 0)
num /= factor;
else if (num / factor > 0 && num % factor != 0)
factor++;
else
break;
}
printf("%ld\n", factor);
return (0);
}
