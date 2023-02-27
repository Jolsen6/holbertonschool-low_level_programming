#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 * @nmemb: n
 * @size: size
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < j)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
