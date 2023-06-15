#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Count of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* Ignoring argv to focus on argc */
	printf("The name of the program is: %s\n", argv[0]);
	printf("The number of command-line arguments is: %i\n", argc - 1);

	return (0);
}
