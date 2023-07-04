#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: A pointer to the first node of the linked list
  *
  * Return: None
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

	free(head);
}
