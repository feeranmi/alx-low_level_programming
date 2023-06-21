#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function pointer
 * @name: The name to be printed
 * @f: Pointer to the function responsible for printing the name
 *
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
