#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

int main(void)
{
	char *notestring = "Recursion is Amazing";

	_puts_recursion(notestring);
	return (0);
}
