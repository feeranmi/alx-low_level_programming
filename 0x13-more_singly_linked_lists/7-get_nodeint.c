#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at the specified index in a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the nth node in the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t j;

	for (j = 0; (j < index) && (head->next); j++)
	head = head->next;

	if (j < index)


	return (NULL);

	return (head);
}
