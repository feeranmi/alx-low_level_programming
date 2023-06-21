#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used for comparison
 *
 * Return: Index of the first element for which the cmp function
 * does not return 0, -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = -1;
	int n;

	if (!array || !cmp || size <= 0)
	return (-1);


	for (n = 0; n < size; n++)
	{
	if (cmp(array[n]))
		{
		index = n;
		break;
		}
	}

	return (index);
}
