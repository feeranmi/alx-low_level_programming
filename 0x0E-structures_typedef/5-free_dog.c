#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure.
 *
 * Description: This function frees the memory allocated for a dog structure,
 *              including the dynamically allocated memory.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
