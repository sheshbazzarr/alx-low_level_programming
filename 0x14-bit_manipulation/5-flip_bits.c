#include "main.h"
/**
 * flip_bits - return the number of bit to flip to get to another number
 * @n: the number passed
 * @m: the other number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}

