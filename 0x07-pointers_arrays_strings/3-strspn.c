#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, b, t, flag;

	t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[b] == accept[b])
			{
				t++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (t);
		}
	}

	return (0);
}
