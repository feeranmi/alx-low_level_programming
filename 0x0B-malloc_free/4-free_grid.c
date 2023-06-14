#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * free_grid - frees a 2dimensional grid previously created by your alloc_grid
  * @grid: grid created
  * @height: the height of the grid
  *
  * Return: Nothing. Just free the allocated memory for Height
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);

	}

	free(grid);

}
