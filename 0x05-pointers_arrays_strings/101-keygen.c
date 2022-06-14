#include "main.h"

/**
 * main - Entry point 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int sum = 2772;

char c;

srand(time(NULL));
while (sum > G_MAX)
{
c = rand() % (G_MAX - G_MIN) + G_MIN;
sum -= c;
if (sum < G_MIN)
{
c -= (G_MIN -sum);
sum =G_MIN;
}
putchar(c);
}
putchar(sum);
return(0);
}
