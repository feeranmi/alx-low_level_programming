#include <stdio.h>
#include "main.h"

/**
  * _print_rev_recursion - function that prints a string in reverse.
  * @s: the string to print
  *
  * Return: Nothing.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
