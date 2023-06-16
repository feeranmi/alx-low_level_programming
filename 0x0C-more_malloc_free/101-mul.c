#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - checks if a string represents a valid number
 * @number: the string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_valid_number(char *number)
{
	int s = 0;

	while (number[s])
	{
	if (!isdigit(number[s]))
	return (0);
	s++;
	}

	return (1);
}

/**
 * multiply_numbers - multiplies two numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the result of the multiplication
 */
int multiply_numbers(char *num1, char *num2)
{
	int a;

	a = atoi(num1) * atoi(num2);
	return (a);
}

/**
 * main - the entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line arguments
 *
 * Return: zero on success, 98 otherwise
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	a = multiply_numbers(argv[1], argv[2]);

	printf("%d\n", a);

	return (0);
}
