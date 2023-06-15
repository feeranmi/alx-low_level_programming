#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: Count of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;

	/* Check if the number of arguments is not 2 */
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	/* Check if the number is negative */
	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	coins = 0;

	/* Calculate the minimum number of coins */
	while (cents > 0)
	{
	if (cents >= 25)
		cents -= 25;
	else if (cents >= 10)
		cents -= 10;
	else if (cents >= 5)
		cents -= 5;
	else if (cents >= 2)
		cents -= 2;
	else
		cents -= 1;

	coins++;
	}

	/* Print the minimum number of coins */
	printf("%d\n", coins);
	return (0);
}
