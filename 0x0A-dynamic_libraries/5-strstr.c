#include "main.h"

/**
 * _strstr - function that finds the first occurence of the substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer going back to haystack
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
		one++;
		two++;
		}
		if (*two == '\0')
		return (haystack);
	}
return (0);
}
