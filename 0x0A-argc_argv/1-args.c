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
	 /* Ignoring argv to focus on argc */
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
