#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _strspn - Gets the length of the initial substring that consists of only
  *           the characters present in the accept string.
  * @s: The string to be searched.
  * @accept: The string containing the characters to be matched.
  *
  * Return: The length of the initial substring that matches the characters
  *         in the accept string.
  */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
