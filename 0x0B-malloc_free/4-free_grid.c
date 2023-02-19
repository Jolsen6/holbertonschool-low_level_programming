#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dim grid made by alloc_grid
  * @grid: address of two dimensional grid
  * @height: height of the grid
  * Return: nothing im so bored
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
