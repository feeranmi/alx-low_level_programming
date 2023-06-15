#include <stdio.h>
#include "main.h"

int confirm_prime(int n, int a);

/**
  * is_prime_number - Returns 1 if the input integer is a prime number
  * @n: The input interger to check
  *
  * Return: 1 for prime number, 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (confirm_prime(n, n - 1));
}

/**
  * confirm_prime - Recursive helper function to check if a number is prime
  * @n: The input integer to check
  * @a: The divisor to check divisibility
  *
  * Return: 1 if n is prime, 0 otherwise
  */
int confirm_prime(int n, int a)
{

	/** Base case */
	if (a <= 2)
	{
		return (1);
	}

	if (n % a == 0)
	{
		return (0);
	}

	/** Recursive case */
	return (confirm_prime(n, a - 1));

}
