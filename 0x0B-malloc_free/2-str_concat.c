#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - The string concatenate function
  * @s1: the first string to concatenate
  * @s2: the scond string to concatenate
  *
  * Return: the result of the concatenated strings
  */
char *str_concat(char *s1, char *s2)
{

	unsigned int cat1 = 0;
	unsigned int cat2 = 0;
	char *a;

	/** Check if s1 is equal to NULL */
	if (s1 == NULL)
		s1 = "";

	/** Check if s2 is equal to NULL */
	if (s2 == NULL)
		s2 = "";

	cat1 = strlen(s1);
	cat2 = strlen(s2);

	/** Allocate memory for concatenate string */
	a = malloc((cat1 + cat2 + 1) * sizeof(char));

	/** Check if the allocated memory was successful */
	if (a == NULL)
		return (NULL);

	strcpy(a, s1);
	strcat(a, s2);

	return (a);

}
