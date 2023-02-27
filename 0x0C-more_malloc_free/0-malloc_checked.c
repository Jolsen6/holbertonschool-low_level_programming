#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*malloc_checked - allocates memory
*@b: size of memory
*return: nothing but my own despair
*/
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
