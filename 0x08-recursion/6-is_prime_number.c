#include <stdio.h>
#include "main.h"

/**
  * is_prime_number - Returns 1 if the input integer is a prime number
  * @n: The input interger to check
  *
  * Return: one for prime number else return zero
  */
int is_prime_number(int n)
{
	int a;

	/** The code base  case */
	if (n <= 1)
	{
		return (0);
	}

	for (a = 2; a <= n - 1; a++)
	{
		if (n % a == 0)
		{
			return (0);
		}
	}
	return (1);

}
