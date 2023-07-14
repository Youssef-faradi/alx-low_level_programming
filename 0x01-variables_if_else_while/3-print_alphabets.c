#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
putchar('a' + i);
}
for (i = 0; i < 26; i++)
{
putchar('A' + i);
}
putchar('\n');
return (0);
}
