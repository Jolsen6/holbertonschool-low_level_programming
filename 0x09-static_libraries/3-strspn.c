#include "main.h"
#include <stdio.h>

/**
*_strspn - gets the length of a prefix substring
*@s: string
*@accept: source
*Return: number of bytes in initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int t = 0;
	unsigned int b;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
				b++;
		}
			a++;
	}
return (t);
}
