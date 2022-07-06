#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
*/
int main(void)
{
unsigned long int a, b, k, b1, b2, k1, k2;
b = 1;
k = 2;
printf("%lu", b);
for (a = 1; a < 91; a++)
{
printf(", %lu", k);
k = k + b;
b = k - b;
}
b1 = b / 1000000000;
b2 = b % 1000000000;
k1 = k / 1000000000;
k2 = k % 1000000000;
for (a = 92; a < 99; ++a)
{
printf(", %lu", k1 + (k2 / 1000000000));
printf("%lu", k2 % 1000000000);
k1 = k1 + b1;
b1 = k1 - b1;
k2 = k2 + b2;
b2 = k2 - b2;
}
printf("\n");
return (0);
}
