#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: integer array to search
 *@size: number of elements in array
 *@cmp: function pointer that returns an int and takes an int
 *Return: -1 on failure or size of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
