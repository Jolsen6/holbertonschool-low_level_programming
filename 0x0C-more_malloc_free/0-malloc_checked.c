#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*malloc_checked - allocates memory
*@b: size of memory
*return: pointer to new memory
*/

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
	{
	free(p);
	exit(98);
	}
	return (p);
}
