#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)



{
	const listint_t *cursor = h;
	size_t number = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		number += 1;
		cursor = cursor->next;
	}
	return (number);
}
