#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: A pointer to the original linked list
  * @str: The string to add to the new node
  *
  * Return: The address of the new node or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *another_list, *temp;

	if (str != NULL)
	{
		another_list = malloc(sizeof(list_t));
		if (another_list == NULL)
			return (NULL);

		another_list->str = strdup(str);
		another_list->len = _strlen(str);
		another_list->next = NULL;

		if (*head == NULL)
		{
			*head  = another_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = another_list;
			return (temp);
		}
	}

	return (NULL);
}

/**
  * _strlen - Returns the length of a string
  * @s: The string to measure the length of
  *
  * Return: The length of the string
  */

int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
