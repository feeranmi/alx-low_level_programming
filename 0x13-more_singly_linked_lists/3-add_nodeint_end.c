#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Integer value to be added.
 *
 * Return: Address of the new element, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *point = *head;

	new_node = malloc(sizeof(listint_t));


	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);

	if (point != NULL)
	{
		while (point->next != NULL)
			point = point->next;
		point->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
