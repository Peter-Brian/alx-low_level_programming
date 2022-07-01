#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int numR;
int numL;
int minL = 48;
for (numL = 48; numL <= 57; numL++)
{
for (numR = minL++; numR <= 57; numR++)
{
if (numR != numL)
{
putchar(numL);
putchar(numR);
if (!(numR == 57 && numL == 56))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
