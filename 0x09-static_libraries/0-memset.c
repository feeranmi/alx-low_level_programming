#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _memset - Fills a block of memory with a specified value.
  * @s: Pointer to the block of memory.
  * @b: Value to be set.
  * @n: Number of bytes to be set.
  *
  * Return: Pointer to the block of memory.
  */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
