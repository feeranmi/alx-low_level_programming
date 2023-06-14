#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{

	unsigned int len;
	char *a;

	/** Check if the input str is NULL */
	if (str == NULL)
		return (NULL);

	len = strlen(str);

	/** Allocate memory for duplicate string */
	a = malloc((len + 1) * sizeof(char));

	/** Confirming if the allocated memory was successful */

	if (a == NULL)
		return (NULL);

	strcpy(a, str);

	return (a);
}
