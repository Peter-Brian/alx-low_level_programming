#include <stdio.h>
#include "main.h"
/**
* main - prints the alphabet, in lowercase, followed by a new line
* Return: 0
*/

void print alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
return (0);
}
