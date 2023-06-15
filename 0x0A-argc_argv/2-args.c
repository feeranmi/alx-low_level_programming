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

	int count = 0; /* Variable to track the argument count */

	if (argc > 0)
	{
	/* Print each argument using a while loop */
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	}

	return (0);
}
