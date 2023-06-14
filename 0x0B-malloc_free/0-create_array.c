#include "main.h"
#include <stdlib.h>

/**
  * create_array - Write a function that creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: The array
  */
char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
