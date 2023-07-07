#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
	return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
