#include "holberton.h"
/**
 *cap_string - function that capitalizes all words of a string
 *@str: string
 *Return: the character
 */

char *cap_string(char *str)
{
int i = 0;

while (str[index])
	{
	while (!(str[index] >= 'a' && str[index] <= 'z'))

	index++;
	if (str[i - 1] == ' ' ||
	str[i - 1] == '\t' ||
	str[i - 1] == '\n' ||
	str[i - 1] == ',' ||
	str[i - 1] == ';' ||
	str[i - 1] == '.' ||
	str[i - 1] == '!' ||
	str[i - 1] == '?' ||
	str[i - 1] == '"' ||
	str[i - 1] == '(' ||
	str[i - 1] == ')' ||
	str[i - 1] == '{' ||
	str[i - 1] == '}' ||
	index == 0)
	str[i] -= 32;
	index++;
	}
return (str);
}
