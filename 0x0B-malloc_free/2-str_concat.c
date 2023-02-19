#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - function that concatenates two strings of any size
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  * Return: two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n = 0, m = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	m = i + j;
	s = malloc((sizeof(char) * m) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (n < m)
	{
		if (n <= i)
			s[n] = s1[n];

		if (n >= i)
		{
			s[n] = s2[j];
			j++;
		}

		n++;
	}

	s[n] = '\0';
	return (s);
}
