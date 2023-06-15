#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _strcat - Concatenates two strings.
  * @dest: Pointer to the destination string.
  * @src: Pointer to the source string.
  *
  * Return: Pointer to the destination string.
  */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
