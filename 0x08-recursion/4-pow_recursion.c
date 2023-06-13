#include <stdio.h>
#include "main.h"

/**
  * _pow_recursion - Function that returns the value of x^y
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
	if (y == 0)
		return (1);

	/** Recursive case */
	return (x * _pow_recursion(x, y - 1));
}
