#include "main.h"
/**
* _strncat - concatenates n bytes from a string to another
* @dest: destination string
* @src: source string
* @n: number of bytes of str to concatenate
*
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
b = 0;
while (dest[a] != '\0')
a++;
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
