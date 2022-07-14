#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string
* to uppercase
* @s: string to modify
*
* Return: the resulting string
*/
char *string_toupper(char *s)
{
int v;
for (v = 0; s[v] != '\0'; v++)
{
if (s[v] >= 'a' && s[v] <= 'z')
s[v] = s[v] - 32;
}
return (s);
}
