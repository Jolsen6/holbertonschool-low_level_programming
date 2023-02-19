#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - Creates an array of chars and
* @size: The size of the array to be initialized.
* @c: The specific char to intialize the array with.
* Return: If size == 0 or the function fails - NULL.
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
	if (size == 0)
	return (NULL);
array = malloc(sizeof(char) * size);
	if (array == NULL)
	return (NULL);
		for (i = 0; index < size; i++)
		array[i] = c;
	return (array);
}
