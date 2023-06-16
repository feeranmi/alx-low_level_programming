#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 *
 * Return: pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrnd;

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	return (malloc(new_size));

	/* If new_size is 0, equivalent to free(ptr) */
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
	return (ptr);

	/* Allocate memory for the new block */
	ptrnd = malloc(new_size);
	if (ptrnd == NULL)
	return (NULL);

	/* Copy the contents from the old block to the new block */
	if (new_size > old_size)
	memcpy(ptrnd, ptr, old_size);
	else
	memcpy(ptrnd, ptr, new_size);

	/* Free the old block */
	free(ptr);

	return (ptrnd);
}
