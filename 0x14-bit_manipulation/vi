#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index > 63)
		return (-1);

	t = 1 << index;

	if (*n & t)
		*n ^= t;

	return (1);
}
