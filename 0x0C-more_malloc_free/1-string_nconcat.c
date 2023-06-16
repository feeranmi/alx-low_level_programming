#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings.
  * @s1: the first string to concatenate
  * @s2: the scond string to concatenate
  * @n:  the number of byte
  *
  * Return: If the function fails, it should return NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	unsigned int cat1 = 0;
	unsigned int cat2 = 0;
	unsigned int cat_lent, i, j;
	char *a;

	/** Check if s1 is equal to NULL */
	if (s1 == NULL)
		s1 = "";

	/** Check if s2 is equal to NULL */
	if (s2 == NULL)
		s2 = "";

	cat1 = strlen(s1);
	cat2 = strlen(s2);

	if (n >= cat2)
	n = cat2;

	cat_len = cat1 + n;

	a = malloc((cat_len + 1) * sizeof(char));
	if (cat == NULL)
	return (NULL);

	for (i = 0; i < cat1; i++)
	a[i] = s1[i];

	for (j = 0; j < n; j++)
	a[i++] = s2[j];

	a[i] = '\0';

	return (a);
}
