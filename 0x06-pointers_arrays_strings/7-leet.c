#include "main.h"
/**
* leet - encodes a string in 1337
* @s: string to be encoded
*
* Return: the resulting string;
*/
char *leet(char *s)
{
int e, r;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
for (e = 0; s[e] != '\0'; e++)
{
for (r = 0; r < 10; r++)
{
if (s[e] == a[r])
{
s[e] = b[r];
}
}
}
return (s);
}
