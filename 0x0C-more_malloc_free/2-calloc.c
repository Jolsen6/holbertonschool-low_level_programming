#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *@nmemb: number of members
 *@size: size of thing passed
 *
 * Return: null on failures
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

int index = 0;
int length = 0;
char *pointer;

if (nmemb == 0 || size == 0)
	return (NULL);

length = nmemb * size;
pointer = malloc(length);

if (pointer == NULL)
	return (NULL);

	while (index < length)
	{
		pointer[index] = 0;
		index++;
	}
	return (pointer);
}
