#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
int f;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
f = n % 10;
if (f  < 6)
	printf ("Last digit of %d is %d  and is less than 6 and not 0", n, f);
if (f > 5)
	printf ("Last digit of %d is %d  and is greater than 5", n, f);
if (f == 0)
	printf ("Last digit of %d is %d  and is 0", n, f);
return (0);
}
