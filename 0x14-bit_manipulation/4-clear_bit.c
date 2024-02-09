#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: the number passed
 * @index: the index passed
 *
 * Return: 1 on Success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setter;

	if (index > 63)
		return (-1);
	setter = 1 << index;
	if (*n & setter)
		*n ^= setter;
	return (1);
}

