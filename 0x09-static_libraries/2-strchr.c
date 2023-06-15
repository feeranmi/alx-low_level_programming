#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _strchr - Locates the first occurrence of a character in a string.
  * @s: Pointer to the string to search.
  * @c: Character to locate.
  *
  * Return: Pointer to the first occurrence of the character in the string,
  *         or NULL if the character is not found.
  */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
