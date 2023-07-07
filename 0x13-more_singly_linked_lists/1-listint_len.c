#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *point = h;
	size_t number = 0;

	while (point != NULL)
	{
		number += 1;
		point = point->next;
	}
	return (number);
}
