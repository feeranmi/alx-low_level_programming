#include "lists.h"

/**
 * free_listint2 - Frees a list of integers and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
	{
	temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = 0;
}
