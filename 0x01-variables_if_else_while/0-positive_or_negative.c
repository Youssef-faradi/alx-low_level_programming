#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	puts("%d is positive", n);
}
if (n < 0)
{
	puts("%d is negative", n);
}
if (n == 0)
{
	puts("%d is zero", n);
}
return (0);
}