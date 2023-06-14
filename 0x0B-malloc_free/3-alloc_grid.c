#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * alloc_grid - The function that returns a pointer to a 2 dimensional array.
  * @width: the width of the grid
  * @height: the height of the grid
  *
  * Return: the result of the concatenated strings
  */
int **alloc_grid(int width, int height)
{

	int **a;
	int i, j;

	/** Check if width or height is equal or  less than zero */
	if (width <= 0 || height <= 0)
		return (NULL);


	a = (int **)malloc(height * sizeof(int));
	if (a == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	a[i] = (int *)malloc(width * sizeof(int));
	if (a[i] == NULL)
	{
	for (j = 0; j < i; j++)
		free(a[j]);
	free(a);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	a[i][j] = 0;
	}

	return (a);

}
