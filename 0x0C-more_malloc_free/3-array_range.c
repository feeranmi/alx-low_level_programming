#include "main.h"
#include <stdlib.h>

/**
  * array_range - Write a function that creates an array of intergers
  * @min: Minimum value
  * @max: Maximum value
  *
  * Return: pointer to the newly created array, NULL on failure
  */
int *array_range(int min, int max)
{
	unsigned int a, i;
	int *arr;

	if (min > max)
	return (NULL);

	a = max - min + 1;
	arr = malloc(a * sizeof(int));

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < a; i++)
	arr[i] = min++;

	return (arr);
}
