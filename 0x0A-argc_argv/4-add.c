#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers and prints the result
 * @argc: Count of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum;
	int a;
	int s;


	/* Check if no numbers are passed */
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	sum = 0;

	/* Iterate through the command-line arguments */
	for (a = 1; a < argc; a++)
	{

	/* Check if the argument contains non-digit characters */
	for (s = 0; argv[a][s] != '\0'; s++)
	{
		if (!isdigit(argv[a][s]))
		{
		printf("Error\n");
		return (1);
		}
	}

	/* Convert the argument to an integer and add it to the sum */
	sum += atoi(argv[a]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
