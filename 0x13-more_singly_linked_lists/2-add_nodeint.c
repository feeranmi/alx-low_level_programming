#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @n: Integer value to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));


	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);


	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;


	return (new_node);
}
