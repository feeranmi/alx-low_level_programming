#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _strncat - Concatenates two strings up to n characters.
  * @dest: Pointer to the destination string.
  * @src: Pointer to the source string.
  * @n: Maximum number of characters to concatenate.
  *
  * Return: Pointer to the destination string.
  */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
