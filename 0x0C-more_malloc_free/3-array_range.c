#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_range - the range of the array
 *@min: the min
 *@max: the max
 *Return: this time number
 */

int *array_range(int min, int max)
{
  int *p;
  int i, size;

  if (min > max)
    return (NULL);
  size = (max - min) + 1;
  p = malloc(size * sizeof(*p));
  if (p == NULL)
    return (NULL);
  for (i = 0; i < size && min <= max; i++, min++)
    *(p + i) = min;
  return (p);
}
