#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int numR;
int numL;
int numM;
for (numL = 48; numL <= 57; numL++)
{
for (numM = numL + 1; numM <= 57; numM++)
{
for (numR = numM + 1; numR <= 57; numR++)
{
if (numM != numR)
{
putchar(numL);
putchar(numM);
putchar(numR);
if (!(numR == 57 && numM == 56 && numL == 55))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
