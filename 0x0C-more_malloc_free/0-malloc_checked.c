#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*malloc_checked - allocates memory using malloc
*@b: size of memory
*return: pointer to new memory
*/
void *malloc_checked(unsigned int b)
{
void *j = malloc(b);
if (j == NULL)
{
free(j);
exit(98);
}
return (j);
}
