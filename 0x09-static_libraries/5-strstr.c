#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - Locates the first occurrence of the substring `needle` in the
 *           string `haystack`.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: Pointer to the first occurrence of `needle` in `haystack`,
 *         or NULL if `needle` is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
