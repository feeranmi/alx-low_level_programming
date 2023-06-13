#include <stdio.h>
#include "main.h"

/**
  * _pow_recursion - Write a function that returns the value of x raised to the power of y
  * @x: We are finding the return value x
  * @y: With the power of y
  *
  * Return: integer value
  */
int _pow_recursion(int x, int y)
{
	/** Error case */
	if (y < 0)
		return (-1);

	/** Base case */
	if (y == 1)
		return (1);

	/** Recursive case */
	return (x * _pow_recursion(x, y - 1));
}
