#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of a variable number of integers.
 * @n: The number of integers to sum.
 *        If n is 0, the function returns 0.
 *        Otherwise, the next n arguments should be integers.
 *
 * Return: The sum of the variable number of integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list summation;
	int total = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(summation, n);
	for (i = 0; i < (int)n; i++)
	{
		total += va_arg(summation, int);
	}
	va_end(summation);

	return (total);
}
