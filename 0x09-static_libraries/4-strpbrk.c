#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - Locates the first occurrence of any character in `accept` string
 *            in the `s` string.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: Pointer to the first occurrence of a character from `accept` in `s`,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
