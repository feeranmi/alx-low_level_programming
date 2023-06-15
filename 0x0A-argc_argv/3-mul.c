#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int s1;
	int s2;
	int result;

	/* Check if the number of arguments is not equal to 3 */
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	/* Convert the command-line arguments to integers */
	s1 = atoi(argv[1]);
	s2 = atoi(argv[2]);

	/* Perform the multiplication and store the result */
	result = s1 * s2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
