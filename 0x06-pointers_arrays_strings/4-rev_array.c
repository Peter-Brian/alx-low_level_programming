#include "main.h"
/**
* reverse_array - reverses an array of integers
* @a: array to be reversed
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
int k, j, tmp;
j = n - 1;
for (k = 0; k < n / 2; k++)
{
tmp = a[k];
a[k] = a[j];
a[j--] = tmp;
}
}
