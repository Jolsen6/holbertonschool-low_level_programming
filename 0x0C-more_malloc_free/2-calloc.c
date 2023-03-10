#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of members
 * @size: size of memory
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int i = 0;
char *p;

if (nmemb == 0 || size == 0)
	return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
	return (NULL);

for (i = 0; i < nmemb * size; i++)
	p[i] = 0;

return (p);
}
