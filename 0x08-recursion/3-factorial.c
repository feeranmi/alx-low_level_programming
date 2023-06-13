#include <stdio.h>
#include "main.h"


/**
  * factorial - Write a function that returns the factorial of a given number.
  * @n: the function should return -1 to indicate an error, if n < 0
  *
  * Return: integer value
  */
int factorial(int n)
{

	/** Error indicator */
	if (n < 0)
		return (-1);

	/** Base case */
	if (n <= 1)
		return (1);

	/** Recursive case */
	return (n * factorial(n - 1));
}
