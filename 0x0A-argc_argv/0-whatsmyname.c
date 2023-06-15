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
	char *s;

	if (argc > 0)
	{
	s  = argv[0];
	printf("The name of the program is: %s\n", s);
	}

	return (0);
}
