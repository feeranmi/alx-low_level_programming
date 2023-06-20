#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the attributes of a dog structure.
 * @d: Pointer to the dog structure to be printed.
 *
 * Description: This function prints the attributes of the dog structure.
 *              If an attribute is NULL, it prints "(nil)"
 *              If the dog structure itself is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name) != NULL ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", (d->owner) != NULL ? d->owner : "(nil)");
	}
}
