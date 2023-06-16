#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: No. of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, returns NULL.
 *         If malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	a = nmemb * size;
	ptr = malloc(a);

	if (ptr == NULL)
	return (NULL);

	/* Set the allocated memory to 0 */
	for (i = 0; i < a; i++)
	*((char *)ptr + i) = 0;

	return (ptr);
}
