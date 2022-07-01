#include <stdio.h>
/**
 * main - Entry point
 * Return: 0.
 */
int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
if ((abc != 'e') && (abc != 'q'))
putchar(abc);
}
putchar('\n');
return (0);
}
