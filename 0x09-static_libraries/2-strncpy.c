#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _strncpy - Copies a specified number of characters from source-destination.
  * @dest: Pointer to the destination string.
  * @src: Pointer to the source string.
  * @n: Maximum number of characters to be copied.
  *
  * Return: Pointer to the destination string.
  */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
