#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to be flipped
 *             to convert one number to another.
 * @n: Number one.
 * @m: Number two.
 *
 * Return: Number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numbits++;
	}

	return (numbits);
}
