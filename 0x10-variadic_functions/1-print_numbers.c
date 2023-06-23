#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers
 * If NULL, no separator is printed.
 * @n: The number of integers passed to the function.
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int j = 0;

	if (n > 0)
	{
		va_start(print, n);

		while (j < n)
		{
			printf("%d", va_arg(print, int));

			if (j != n - 1  && separator != NULL)
				printf("%s", separator);

			j++;
		}
		va_end(print);
	}
	printf("\n");
}
