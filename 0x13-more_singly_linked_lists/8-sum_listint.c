#include "lists.h"

/**
 * sum_listint - Computes the sum of all data in a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int summation;

	summation = 0;

	while (head)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
