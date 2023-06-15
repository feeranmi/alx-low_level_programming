#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _strcmp - Compares two strings.
  * @s1: The first string.
  * @s2: The second string.
  *
  * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
  *         or a positive value if s1 is greater than s2.
  */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
