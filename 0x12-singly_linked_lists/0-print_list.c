#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list: - Prints all elements of a linked list
* @h: A pointer to the head of the linked list
* Returns: The number of nodes in the linked list
*/
size_t print_list(const list_t *h)
{
	size_t print = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		print++;
	}

	return (print);
}
