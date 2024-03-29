#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc.
  * @b: size of the memory to allocate
  *
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{

	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
