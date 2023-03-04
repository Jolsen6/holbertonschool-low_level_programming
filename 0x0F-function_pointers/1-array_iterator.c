#include "function_pointers.h"

/**
 *array_iterator - ...
 *@array: array passed in
 *@size: size of array
 *@action: pointer to a function that returns nothing & takes an int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	if (size == 0)
		return;

	while (i < size)
	{
	action(array[i]);
	i++;
	}
}
