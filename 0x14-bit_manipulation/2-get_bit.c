#include "main.h"
/**
 * get_bit - return value of a bit at a given index
 * @n: number that is passed
 * @index: the index to find the bit
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 0;

	if (n == 0 && index < 64)
		return (0);
	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
			return (n & 1);
	}
	return (-1);
}

