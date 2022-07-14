#include "main.h"
/**
* rot13 - encodes a string in rot13
* @s: string to be encoded
*
* Return: the resulting string
*/
char *rot13(char *s)
{
int i, w;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (w = 0; a[w] != '\0'; w++)
{
if (s[i] == a[w])
{
s[i] = b[w];
break;
}
}
}
return (s);
}
