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
	int j;
	int printed = 0;

	va_start(print, n);

	for (j = 0; j < (int)n; j++)
	{
		printed += va_arg(print, int);
	printf("%d", printed);

	if (separator != NULL && j < (int)(n - 1))
		{
		printf("%s", separator);
		}
	}

	va_end(print);
	printf("\n");
}
