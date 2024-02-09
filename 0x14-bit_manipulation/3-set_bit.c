#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: number passed
 * @index: the index passed
 *
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setter;

	if (index > 63)
		return (-1);
	setter = 1 << index;
	*n = (*n | setter);
	return (1);
}

