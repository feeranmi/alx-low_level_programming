#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: Pointer to the function to be executed on each element
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!array || !action)
	{
	return;
	}

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
