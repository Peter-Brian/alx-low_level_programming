#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
unsigned long int p, k, next, sum;
p = 1;
k = 2;
sum = 0;
for (i = 1; i <= 33; ++i)
{
if (p < 4000000 && (p % 2) == 0)
{
sum = sum + p;
}
next = p + k;
p = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
