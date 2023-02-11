#include "holberton.h"
/**
 *_strcmp - function copies string
 *@s1: string one
 *@s2: string two
 *Return: new string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
